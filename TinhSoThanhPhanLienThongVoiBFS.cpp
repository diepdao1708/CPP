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
void BFS(int u)
{
	queue<int> q;
	q.push(u);
	chuaxet[u]=true;
	while(!q.empty())
	{
		u=q.front();
		q.pop();
		for(int i=0; i<G[u].size(); i++)
		{
			int v=G[u][i];
			if(!chuaxet[v])
			{
				chuaxet[v]=true;
				q.push(v);
			}
		}
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
				chuaxet[v]=true;
				st.push(u);
				st.push(v);
				break;
			}
		}
	}
}
int TPLT()
{
	int soTPLT=0;
	for(int i=1; i<=V; i++)
	{
		if(!chuaxet[i])
		{
			soTPLT++;
			BFS(i);
		}
	}
	return soTPLT;
}
void Run()
{
	cin>>V>>E;
	for(int i=1; i<=V; i++) 
	{
		G[i].clear();
		chuaxet[i]=false;
	}
	for(int i=0; i<E; i++)
	{
		int u, v; cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	cout<<TPLT();
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}