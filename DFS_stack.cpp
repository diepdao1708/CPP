#include<bits/stdc++.h>
using namespace std;
vector<bool> dd;
vector<vector<int> > G;
void DFS_stack(int u)
{
    stack<int> s;
    s.push(u);
    dd[u]=0;
    cout<<u<<' ';
    while(!s.empty())
    {
        u=s.top();
        s.pop();
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            if(dd[v])
            {
                cout<<v<<' ';
                dd[v]=0;
                s.push(u);
                s.push(v);
                break;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int V, E;
    cin>>V>>E;
    G.resize(V+1);
    dd.resize(V+1, 1);
    for(int i=0; i<E; i++)
    {
        int u,v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    DFS_stack(1);
    return 0;
}