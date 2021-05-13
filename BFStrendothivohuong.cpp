#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<int> G[1005];
bool chuaxet[1005];

void BFS(int u)
{
	queue<int> q;
	q.push(u);
	cout<<u<<' ';
	chuaxet[u]=true;
	while(!q.empty())
	{
		u=q.front(); q.pop();
		for(int i=0; i<G[u].size(); i++)
		{
			int v=G[u][i];
			if(!chuaxet[v])
			{
				cout<<v<<' ';
				chuaxet[v]=true;
				q.push(v);
			}
		}
	}
}
void Run()
{
	int V, E, u;
	cin>>V>>E>>u;
	for(int i=1; i<=V; i++)
	{
		G[i].clear();
		chuaxet[i]=false;
	}
	for(int i=0; i<E; i++)
	{
		int a, b; cin>>a>>b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	BFS(u);
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}