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
vector<vector<int> > g;
vector<int> pre;
vector<bool> dd;
int res = 0;
int ans = 0;
void Print(int u, int v)
{
    int dem;
	if(!dd[v]) dem = 0;
	else
	{
		vector<int> kq;
		kq.push_back(v);
		while(u!=v)
		{
			v=pre[v];
			kq.push_back(v);
		}
        dem = kq.size() - 1;
	}
    //cout<<dem<<' ';
    res += dem;
    if(dem!=0) ans++;
	
}

void BFS(int u)
{
	queue<int> q;
	q.push(u);
	dd[u]=true;
	while(!q.empty())
	{
		u=q.front(); q.pop();
		for(int i=0; i<g[u].size(); i++)
		{
			int v=g[u][i];
			if(!dd[v])
			{
				pre[v]=u;
				dd[v]=true;
				q.push(v);
			}
		}
	}
}
void Run()
{
    res = 0;
    ans = 0;
    cin>>n>>m;
    g.clear(); g.resize(n+1);
    pre.clear(); pre.resize(n+1);
    dd.clear(); dd.resize(n+1, 0);
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
    }
    BFS(1);
    for(int i=1; i<=n; i++){
        pre.clear(); pre.resize(n+1);
        dd.clear(); dd.resize(n+1, 0);
        BFS(i);
        for(int j=1; j<=n; j++){
            Print(i, j);
        }
        //cout<<endl;
    }
    float x = (float)res/ans;
    printf("%0.2f", x);
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}