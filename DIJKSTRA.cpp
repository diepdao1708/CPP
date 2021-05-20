#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int const oo = 1e9;
int n, m, b;
vector<vector<pair<int, int> > > a;
vector<int> len;

void dijkstra(){
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
    q.push(make_pair(b, 0));
    len[b] = 0;
    while(!q.empty()){
        int u = q.top().first;
        int w = q.top().second;
        q.pop();
        for(int i=0; i<a[u].size(); i++){
            int v = a[u][i].first;
            int ww = a[u][i].second;
            if(len[v] > w + ww){
                len[v] = w + ww;
                q.push(make_pair(v, len[v]));
            } 
        }
    }
}

void Run()
{
    cin>>n>>m>>b;
    a.clear(); a.resize(n+1);
    len.clear(); len.resize(n+1, oo);
    for(int i=1; i<=m; i++){
        int u, v, w;
        cin>>u>>v>>w;
        a[u].push_back(make_pair(v, w));
        a[v].push_back(make_pair(u, w));
    }
    dijkstra();
    for(int i=1; i<=n; i++){
        cout<<len[i]<<' ';
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