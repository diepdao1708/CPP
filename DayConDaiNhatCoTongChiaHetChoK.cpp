#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;

int n, k;
vector<int> a;
vector<vector<int> > f;

void Run()
{
	cin>>n>>k;
	a.clear(); a.resize(n+1);
	for(int i=1; i<=n; i++) 
	{
		cin>>a[i];
		a[i] %= k;
	}
	f.clear(); f.resize(n+1, vector<int>(k+1, INT8_MIN));
	f[0][0]=0;
	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<k; j++)
		{
			f[i][j]=max(f[i-1][j], f[i-1][ (j-a[i]+k) % k ] + 1);
		}
	}
	cout<<f[n][0]<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}