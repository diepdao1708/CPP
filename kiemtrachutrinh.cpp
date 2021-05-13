#include<bits/stdc++.h>
using namespace std;
int V, E;
vector<vector<int> > G;
vector<bool> dd;
vector<int> pre;
bool ok=0;
void DFS(int u)
{
    dd[u]=1;
    for(int i=0; i<G[u].size(); i++)
    {
        if (ok) return;
        int v=G[u][i];
        if(v==pre[u]) continue;
        if(dd[v]==0)
        {
            pre[v]=u;
            DFS(v);
        }
        else
        {
            ok=1;
            cout<<"YES";
            return;
        } 
    }
}
void Reset()
{
    ok=0;
    G.clear();
    dd.clear();
    pre.clear();
    G.resize(V+1);
    dd.resize(V+1, 0);
    pre.resize(V+1, -1);
}
void Run()
{
    cin>>V>>E;
    Reset();
    for(int i=0; i<E; i++) 
    {
        int a, b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(int i=1;i<=V;i++)
        if (dd[i]==0) DFS(i);
    if(ok==0) cout<<"NO";
    cout<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}