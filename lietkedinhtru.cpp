#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > G;
vector<int> Numbering, Low, pre;
vector<bool> khop;
int V, E;
const int oo=1e9;
void DFS(int u, int tt)
{
    Numbering[u]=tt;
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(v==pre[u]) continue;
        if(Numbering[v]==0)
        {
            pre[v]=u;
            DFS(v, tt+1);
            if(Low[v]>=Numbering[u]) khop[u]=1;
            Low[u]=min(Low[u], Low[v]);
        }
        else Low[u]=min(Low[u], Numbering[v]);
    }
}
void reset()
{
    G.clear();
    Numbering.clear();
    Low.clear();
    pre.clear();
    khop.clear();
    G.resize(V+1);
    Numbering.resize(V+1, 0);
    Low.resize(V+1, oo);
    pre.resize(V+1, -1);
    khop.resize(V+1, 0);
}
void Run()
{
    cin>>V>>E;
    reset();
    for(int i=0; i<E; i++)
    {
        int a, b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(int i=1; i<=V; i++)
    {
        if(Numbering[i]==0)
        {
            DFS(i, 1);
            int dem=0;
            for(int j=0; j<G[i].size(); j++)
            {
                if(Numbering[G[i][j]]==2) dem++;
            }
            if(dem<2) khop[i]=0;
        }
    }
    for(int i=1; i<=V; i++)
    {
        if(khop[i]==1) cout<<i<<' ';
    }
    cout<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}