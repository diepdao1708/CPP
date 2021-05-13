#include<bits/stdc++.h>
using namespace std;
vector<int> G[1001];
bool dd[1001];
int Trace[1001];
int V, E;

void DFS(int u)
{
    dd[u]=1;
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(dd[v]==0)
        {
            Trace[v]=u;
            dd[v]=1;
            DFS(v);
        }
    }
}//DFS
void Print()
{
    int Q;
    cin>>Q;
    while(Q--)
    {
        int S, F;
        cin>>S>>F;
        for(int i=1; i<=V; i++)
        {
            dd[i]=0;
            Trace[1]=-1;
        }
        DFS(S);
        if(dd[F]==0) cout<<"NO";
        else cout<<"YES";
        cout<<'\n';
    }
    //cout<<'\n';
}// Print
void Run()
{
    cin>>V>>E;
    for(int i=1; i<=V; i++)
    {
        G[i].clear();
        dd[i]=0;
        Trace[1]=-1;
    }
    for(int i=1; i<=E; i++)
    {
        int a, b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    Print();
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