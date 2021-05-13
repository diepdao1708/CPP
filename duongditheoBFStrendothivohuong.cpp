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
vector<int> G[1005];
bool chuaxet[1005];
vector<int> Trace;
void Print(int u, int v)
{
	if(!chuaxet[v]) cout<<-1;
	else
	{
		vector<int> kq;
		kq.push_back(v);
		while(u!=v)
		{
			v=Trace[v];
			kq.push_back(v);
		}
		for(int i=kq.size()-1; i>=0; i--) cout<<kq[i]<<' ';
	}
	
}
void DFS(int u)
{
	stack<int> st;
	st.push(u);
	chuaxet[u]=true;
	while(!st.empty())
	{
		u=st.top(); st.pop();
		for(int i=0; i<G[u].size(); i++)
		{
			int v=G[u][i];
			if(!chuaxet[v])
			{
				Trace[v]=u;
				chuaxet[v]=true;
				st.push(u);
				st.push(v);
				break;
			}
		}
	}
}
void BFS(int u)
{
	queue<int> q;
	q.push(u);
	chuaxet[u]=true;
	while(!q.empty())
	{
		u=q.front(); q.pop();
		for(int i=0; i<G[u].size(); i++)
		{
			int v=G[u][i];
			if(!chuaxet[v])
			{
				Trace[v]=u;
				chuaxet[v]=true;
				q.push(v);
			}
		}
	}
}
void Run()
{
	int u, v;
	cin>>V>>E>>u>>v;
	Trace.clear();
	Trace.resize(V+1, 0);
	for(int i=1; i<=V; i++)
	{
		G[i].clear();
		chuaxet[i]=false;
	}
	for(int i=0; i<E; i++)
	{
		int x, y; cin>>x>>y;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	BFS(u);
	Print(u, v);
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}