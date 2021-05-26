#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
#define ll long long
using namespace std;
const int oo = 1e9;
vector<vector<int> > g;
vector<bool> dd;
vector<int> pre;
void dfs(int u){
    dd[u] = 1;
    for(int i=0; i<g[u].size(); i++){
        int v = g[u][i];
        if(!dd[v]) {
            pre[v] = u;
            dfs(v);
        }
    }
}
void Run()
{
    int n; cin>>n;
    g.clear(); g.resize(n+1);
    for(int i=1; i<n; i++){
        int u, v; 
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int q;
    cin>>q;
    while(q--){
        int x, y; 
        cin>>x>>y;
        dd.clear(); dd.resize(n+1, 0);
        pre.clear(); pre.resize(n+1);
        dfs(x);
        int dem = 0;
        while(x != y){
            y = pre[y];
            dem++;
        }
        cout<<dem<<endl;
    }
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}