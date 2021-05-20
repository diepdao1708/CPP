#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, x;
vector<int> a, pos;
vector<vector<int> > res;
int sl;

void backTrack(int vt, int x){
    if(x<0) return;
    if(x==0){
        sl++;
        res.push_back(pos);
        return;
    }
    for(int i=vt; i<a.size(); i++){
        pos.push_back(a[i]);
        backTrack(i, x - a[i]);
        pos.pop_back();
    }
}

void Run()
{
    sl = 0;
    cin>>n>>x;
    a.clear(); a.resize(n);
    res.clear();
    pos.clear();
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    backTrack(0, x);
    if(sl == 0){
        cout<<"-1"<<endl;
        return;
    }
    cout<<sl<<' ';
    for(int i=0; i<res.size(); i++){
        cout<<"{";
        for(int j=0; j<res[i].size()-1; j++){
            cout<<res[i][j]<<' ';
        }
        cout<<res[i].back()<<"} ";
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}
