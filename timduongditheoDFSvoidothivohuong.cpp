#include<bits/stdc++.h>
using namespace std;
vector<int> G[1001];
int V, E, u, v;
vector<bool> dd;
vector<int> Trace;
void Print(int u, int v)
{
    if(dd[v]==0) cout<<"-1";
    else
    {
        vector<int> kq;
        kq.push_back(v);
        while(u!=v)
        {
            v=Trace[v];
            kq.push_back(v);
        }
        for(int i=kq.size()-1; i>=0; i--) cout<<kq[i]<<" ";
    }
    
}
void DFS(int u)
{
    dd[u]=1;
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(dd[v]==0)
        {
            Trace[v]=u;
            DFS(v);
        }
    }   
}
void Run()
{
    cin>>V>>E>>u>>v;
    Trace.clear();
    Trace.resize(V+1);
    dd.clear();
    dd.resize(V+1,0);
    for(int i=1; i<=V; i++) G[i].clear();
    for(int i=0; i<E; i++)
    {
        int a, b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    DFS(u);
    Print(u, v);
    cout<<"\n";
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}