#include<bits/stdc++.h>
using namespace std;
vector<int> G[1001];
int V, E, u;
vector<bool> dd;
void DFS(int u)
{
    dd[u]=1;
    cout<<u<<' ';
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(dd[v]==0) DFS(v);
    }
}
void Run()
{
    cin>>V>>E>>u;
    dd.clear();
    dd.resize(V+1,0);
    for(int i=1; i<=V; i++) G[i].clear();
    for(int i=0; i<E; i++)
    {
        int a, b;
        cin>>a>>b;
        G[a].push_back(b);
        //G[b].push_back(a);
    }
    DFS(u);
    cout<<"\n";
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}