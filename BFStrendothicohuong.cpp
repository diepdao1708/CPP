#include<bits/stdc++.h>
using namespace std;
vector<int> G[1001];
int V, E, u;
vector<bool> dd;
void BFS(int u)
{
    queue<int> st;
    st.push(u);
    dd[u]=1;
    while(!st.empty())
    {
        int k=st.front();
        cout<<k<<' ';
        st.pop();
        for(int i=0; i<G[k].size(); i++)
        {
            int v=G[k][i];
            if(dd[v]==0)
            {
                st.push(v);
                dd[v]=1;
            }
        }
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
    }
    BFS(u);
    cout<<"\n";
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}