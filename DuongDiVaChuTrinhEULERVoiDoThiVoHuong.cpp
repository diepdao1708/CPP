#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int v, e;
vector<vector<int> > G;
void Run()
{
    cin>>v>>e;
    G.clear(); G.resize(v+1);
    for(int i=0; i<e; i++)
    {
        int u, v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int dem=0;
    //for(int i=1; i<=v; i++) cout<<G[i].size()<<' ';
    for(int i=1; i<=v; i++)
    {
        if(G[i].size() % 2 ==0) dem++;
    }
    if(dem == v) cout<<2<<'\n';
    else {
        if(dem == v-2) cout<<1<<'\n';
        else cout<<0<<'\n';
    }
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}