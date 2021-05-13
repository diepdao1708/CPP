#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;

int n, m;
vector<vector<int> > G;
vector<bool> dd;
int dem = 0;

void DFS(int u){
    dd[u]=1;
    dem++;
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(!dd[v]) DFS(v);
    }
}
int KB() {
    int res = 0;
	for(int i=1; i<=n; i++) {
		if(!dd[i]) {
            res = max(res, dem);
            dem = 0;
            DFS(i);
		}
	}
    res = max(res, dem);
    return res;
}
void Run()
{
    cin>>n>>m;
    G.clear(); G.resize(n+5);
    dd.clear(); dd.resize(n+5, 0);
    for(int i=1; i<=m; i++){
        int u, v; 
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    cout<<KB()<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}