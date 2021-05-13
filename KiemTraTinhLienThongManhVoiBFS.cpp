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
		int s=q.front();
		q.pop();
		for(int i=0; i<G[s].size(); i++)
		{
			int v=G[s][i];
			if(!chuaxet[v])
			{
				chuaxet[v]=true;
				q.push(v);
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
	}
	if(TPLT()==1) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}