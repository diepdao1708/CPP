#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int V, E;
vector<vector<int> > g;

void Run()
{
    cin>>V>>E;
    g.clear(); g.resize(V+1);
    for(int i=0; i<E; i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int dem = 0;
    for(int i=1; i<=V; i++){
        if(g[i].size() % 2 == 0) dem++;
    }
    if(dem == V) cout<<2<<endl;
    else if(dem == V-2) cout<<1<<endl;
    else cout<<0<<endl;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}