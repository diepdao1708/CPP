#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, m;
vector<vector<int> > a;
vector<vector<bool> > dd;
bool ok;
pair<int, int> b, e;
pair<int, int> h[4] = {make_pair(-1, 0), make_pair(1, 0), make_pair(0, -1), make_pair(0, 1)};

void TD(pair<int, int> u, int huong, int lan){
    if(ok == true) return;
    if(u == e){
        ok = true;
        return;
    }
    for(int i=0; i<4; i++){
        pair<int, int> v = make_pair(u.first + h[i].first, u.second + h[i].second);
        if(v.first >= 0 && v.first < n && v.second >= 0 && v.second < m && !dd[v.first][v.second] && a[v.first][v.second] == 1){
            if(huong != -1 && huong != i && lan == 1) continue;
            dd[v.first][v.second] = 1;
            if(huong != -1 && huong != i) TD(v, i, lan-1);
            else TD(v, i, lan);
            dd[v.first][v.second] = 0;
        }
    }
}

void Run()
{
    cin>>n>>m;
    ok = false;
    a.clear(); a.resize(n+1, vector<int> (m+1));
    dd.clear(); dd.resize(n+1, vector<bool> (m+1, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char x; cin>>x;
            if(x == '*') a[i][j] = 0;
            else a[i][j] = 1;
            if(x == 'S') b = make_pair(i, j);
            if(x == 'T') e = make_pair(i, j);
        }
    }
    dd[b.first][b.second] = 1;
    TD(b, -1, 3);
    if(ok) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}