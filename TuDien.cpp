#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;

vector<string> a;
vector<vector<char> > dic;
int k, m, n;
vector<vector<bool> > dd;
vector<string> res;

bool check(string s)
{
	for(int i=0; i<a.size(); i++)
	{
		if(a[i]==s) return 1;
	}
	return 0;
}

void Try(int i, int j, string s)
{
	if(check(s)) res.push_back(s);
	if(i-1>=0 && j-1>=0 && !dd[i-1][j-1])
	{
		//res.push_back(s);
		dd[i-1][j-1]=1;
		Try(i-1, j-1, s+dic[i-1][j-1]);
		dd[i-1][j-1]=0;
	}
	if(i-1>=0 && !dd[i-1][j])
	{
		//res.push_back(s);
		dd[i-1][j]=1;
		Try(i-1, j, s+dic[i-1][j]);
		dd[i-1][j]=0;
	}
	if(i-1>=0 && j+1<m && !dd[i-1][j+1])
	{
		//res.push_back(s);
		dd[i-1][j+1]=1;
		Try(i-1, j+1, s+dic[i-1][j+1]);
		dd[i-1][j+1]=0;
	}
	if(j-1>=0 && !dd[i][j-1])
	{
		//res.push_back(s);
		dd[i][j-1]=1;
		Try(i, j-1, s+dic[i][j-1]);
		dd[i][j-1]=0;
	}
	if(j+1<m && !dd[i][j+1])
	{
		//res.push_back(s);
		dd[i][j+1]=1;
		Try(i, j+1, s+dic[i][j+1]);
		dd[i][j+1]=0;
	}
	if(i+1<n && j-1>=0 && !dd[i+1][j-1])
	{
		//res.push_back(s);
		dd[i+1][j-1]=1;
		Try(i+1, j-1, s+dic[i+1][j-1]);
		dd[i+1][j-1]=0;
	}
	if(i+1<n && !dd[i+1][j])
	{
		//res.push_back(s);
		dd[i+1][j]=1;
		Try(i+1, j, s+dic[i+1][j]);
		dd[i+1][j]=0;
	}
	if(i+1<n && j+1<m && !dd[i+1][j+1])
	{
		//res.push_back(s);
		dd[i+1][j+1]=1;
		Try(i+1, j+1, s+dic[i+1][j+1]);
		dd[i+1][j+1]=0;
	}

}

void Run()
{
	cin>>k>>n>>m;
	res.clear();
	a.clear(); a.resize(k);
	for(int i=0; i<k; i++) cin>>a[i];
	dic.clear(); dic.resize(n);
	
	for(int i=0; i<n; i++)
	{
		dic[i].resize(m);
		for(int j=0; j<m; j++) cin>>dic[i][j];
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			dd.clear();
			dd.resize(n+1, vector<bool>(m+1, 0));
			string s="";
			s+=dic[i][j];
			dd[i][j]=1;
			Try(i, j, s);
		}
	}
	if(res.size()==0) 
	{
		cout<<-1<<endl;
		return;
	}
	for(int i=0; i<res.size(); i++) cout<<res[i]<<' ';
	
	cout<<'\n';
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}