#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
void Run()
{
	int n, m; cin>>n>>m;
	int p[101], q[101], r[201]={};
	for(int i=0; i<n; i++) cin>>p[i];
	for(int i=0; i<m; i++) cin>>q[i];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			r[i+j]+=p[i]*q[j];
		}
	}
	for(int i=0; i<n+m-1; i++) cout<<r[i]<<' ';
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}