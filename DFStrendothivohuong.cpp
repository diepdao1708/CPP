#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<int> G[1000];
int V, E, u;
vector<bool> dd;
void DFS(int u)
{
    dd[u]=1;
    cout<<u<<' ';
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(!dd[v]) DFS(v);
    }
}
void Run()
{
    cin>>V>>E>>u;
    dd.clear();
    dd.resize(V+1, 0);
    for(int i=1; i<=V; i++) G[i].clear();
    for(int i=1; i<=E; i++)
    {
        int u, v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    DFS(u);
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}