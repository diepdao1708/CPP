#include<bits/stdc++.h>
using namespace std;
vector<int> G[10001];
bool dd[10001];
int Trace[10001];

int V,E,S,F;
void Print(int S, int F)
{
    if(dd[F]==0) cout<<"-1";
    else
    {
        vector<int> kq;
        kq.push_back(F);
        while(S!=F)
        {
            F=Trace[F];
            kq.push_back(F);
        }
        for(int i=kq.size()-1; i>=0; i--) cout<<kq[i]<<' ';
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
}// DFS
void Run()
{
    cin>>V>>E>>S>>F;
    for(int i=1; i<=V; i++)
    {
        dd[i]=0;
        G[i].clear();
        Trace[i]=-1;
    }
    for(int i=1; i<=E; i++)
    {
        int a, b;
        cin>>a>>b;
        G[a].push_back(b);
    }
    DFS(S);
    Print(S, F);
    cout<<'\n';
}// Run
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
//1 6  9  1  6 1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4