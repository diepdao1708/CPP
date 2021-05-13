#include<bits/stdc++.h>
using namespace std;
vector<bool> dd;
vector<vector<int> > G;

int maxx=0;
void dfs(int u, int dem)
{
    cout<<u<<' ';
    maxx=max(maxx, dem);
    dd[u]=1;
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(dd[v]==0) dfs(v, dem+1);
    }
}
void dq()
{
    int V, E;
    cin>>V>>E;
    G.resize(V+1);
    dd.resize(V+1, 0);
    for(int i=0; i<E; i++)
    {
        int u, v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    
    for(int i=1; i<=V; i++)
    {
        if(dd[i]==0)
        {
            // if(maxx<dem) maxx=dem;
            // dem=0;
            dfs(i,1);
        }
        
    }
    //cout<<maxx;
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    

    dq();
    return 0;
}
// 6 7
// 1 2
// 1 3
// 1 4
// 2 4
// 3 5
// 3 6
// 4 5
// 1 2 4 5 3 6