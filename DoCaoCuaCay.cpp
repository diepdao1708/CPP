#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<int> G[100006];
int n;
vector<bool> dd;
int maxx = 0;
int dem = 0;
void DFS(int u)
{
    if(G[u].size() == 1){
        maxx = max(maxx, dem);
    }
    dd[u]=1;
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        dem++;
        if(!dd[v]) DFS(v);
        dem--;
    }
}
void Run()
{
    maxx = 0;
    dem = 0;
    cin>>n;
    dd.clear();
    dd.resize(n+1, 0);
    for(int i=1; i<=n; i++) G[i].clear();
    for(int i=1; i<n; i++)
    {
        int u, v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    DFS(1);
    cout<<maxx;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}