#include<bits/stdc++.h>
using namespace std;
int V, E;
vector<vector<int> >G;
vector<int> Numbering;
vector<int> Low;
vector<int> pre;
const int oo=1e9;
vector<pair<int, int> > res;
void DFS(int u, int count)
{
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(pre[u]==v) continue;
        if(Numbering[v]==0)
        {
            Numbering[v]=count;
            pre[v]=u;
            DFS(v, count+1);
            if(Low[v]>Numbering[u])
            {
                if(u<v) res.push_back(make_pair(u, v));
                else res.push_back(make_pair(v, u));
            }
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
    G.resize(V+1);
    Numbering.resize(V+1, 0);
    Low.resize(V+1, oo);
    pre.resize(V+1);
    res.clear();
    res.resize(0);
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
    int count=1;
    Numbering[1]=1;
    DFS(1, count);
    sort(res.begin(), res.end());
    for(int i=0; i<res.size(); i++)
    {
        cout<<res[i].first<<' '<<res[i].second<<' ';
    }
	cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}
