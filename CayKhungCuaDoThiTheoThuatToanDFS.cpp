#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int V, E, b;
vector<vector<int> > g;
vector<bool> dd;
vector<pair<int, int> > tree;
bool ok = 0;

void print(){
    for(int i=0; i<tree.size(); i++){
        cout<<tree[i].first<<' '<<tree[i].second<<endl;
    }
}

void DFS(int u){
    dd[u] = 1;
    for(int i = 0; i<g[u].size(); i++){
        int v = g[u][i];
        if(!dd[v]){
            tree.push_back(make_pair(u, v));
            DFS(v);
        }
    }
}

void Run()
{
    cin>>V>>E>>b;
    g.clear(); g.resize(V+1);
    dd.clear(); dd.resize(V+1, 0);
    ok = 0;
    tree.clear();

    for(int i=0; i<E; i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    DFS(b);
    for(int i=1; i<=V; i++){
        if(!dd[i]) ok = 1;
    }
    //cout<<ok <<endl;
    if(ok) cout<<"-1"<<endl;
    else print();
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}