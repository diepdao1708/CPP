#include<bits/stdc++.h>
using namespace std;
string x, y, z;
int a,b, c;
int L[101][101][101]={};
void solve()
{
	cin>>a>>b>>c;
	//cin.ignore();
	cin>>x>>y>>z;
	for(int i=0; i<x.length(); i++) L[i][0][0]=0;
	for(int i=0; i<y.length(); i++) L[0][i][0]=0;
	for(int i=0; i<z.length(); i++) L[0][0][i]=0;
	int Max=0;
	for(int i=1; i<=a; i++)
	{
		for(int j=1; j<=b; j++)
		{
			for(int k=1; k<=c; k++)
			{
				if(x[i-1]==y[j-1]&&y[j-1]==z[k-1])
				{
					L[i][j][k]=L[i-1][j-1][k-1]+1;
				}
				else L[i][j][k]=max(L[i-1][j][k],max(L[i][j-1][k], L[i][j][k-1]));
				if(L[i][j][k]>Max) Max=L[i][j][k];
			}
		}
	}
	cout<<Max<<'\n';
}
int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}