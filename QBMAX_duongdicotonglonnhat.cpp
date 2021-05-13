#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	int m, n;
	cin>>m>>n;
	int a[101][101]={};
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int j=1;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			int tmp=a[i][j-1];
			if (i-1>=0) tmp=max(tmp,a[i-1][j-1]);
			if (i+1<m) tmp=max(tmp,a[i+1][j-1]);
			a[i][j]+=tmp;
		}
	}
	int res=-1e9;
	for(int i=0;i<m;i++)  res=max(res,a[i][n-1]);
	cout<<res;
	return 0;
}
