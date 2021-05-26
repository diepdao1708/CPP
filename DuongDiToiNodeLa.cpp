#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n;
vector<vector<int> > g;
vector<int> pre;
vector<bool> dd;
vector<int> res;
vector<vector<int> > ans;

void Print(int u, int v)
{
		vector<int> kq;
		kq.push_back(v);
		while(u!=v)
		{
			v=pre[v];
			kq.push_back(v);
		}
		ans.push_back(kq);
}

void dfs(int u){
    dd[u]=1;
    if(g[u].size() == 1 && u!=1) res.push_back(u);
    for(int i=0; i<g[u].size(); i++){
        int v = g[u][i];
        if(!dd[v]){
            pre[v] = u;
            dfs(v);
        }
    }
}
void Run()
{
    cin>>n;
    g.clear(); g.resize(n+1);
    pre.clear(); pre.resize(n+1);
    dd.clear(); dd.resize(n+1, 0);
    res.clear();
    ans.clear();
    for(int i=1; i<n; i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    for(int i=0; i<res.size(); i++) 
        Print(1, res[i]);
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        for(int j=ans[i].size()-1; j>=0; j--){
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
    }
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}