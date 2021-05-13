#include<bits/stdc++.h>
using namespace std;
int V,E,S,F;
vector<int> G[1001];
bool dd[1001]={};
int Trace[1001]={};
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
        for(int i=kq.size()-1; i>=0; i--)
        {
            cout<<kq[i]<<' ';
        }
    }
    
}
void BFS(int u)
{
    queue<int> st;
    dd[u]=1;
    st.push(u);
    while(!st.empty())
    {
        int k=st.front();
        st.pop();
        for(int i=0; i<G[k].size(); i++)
        {
            int v=G[k][i];
            if(dd[v]==0)
            {
                st.push(v);
                Trace[v]=k;
                dd[v]=1;
            }
        }
    }
}// BFS
void Run()
{
    cin>>V>>E>>S>>F;
    for(int i=1; i<=V; i++)
    {
        G[i].clear();
        dd[i]=0;
        Trace[i]=-1;
    }
    for(int i=1; i<=E; i++)
    {
        int a, b;
        cin>>a>>b;
        G[a].push_back(b);
    }
    BFS(S);
    Print(S, F);
    //for(int i=1; i<=V; i++) cout<<Trace[i]<<' ';
    cout<<'\n';
}
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
// 1 6 9 1 6 1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4