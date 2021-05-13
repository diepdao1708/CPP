#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int n, k;
long long P[1001][1001]={};
void pre()
{
    for(int i=0; i<=1000; i++) P[0][i]=1;
	for(int j=1; j<=1000; j++)
	{
		for(int i=1; i<=j; i++)
		{
			P[i][j]=(P[i-1][j-1]*j)%mod;
		}
	}

}
void solve()
{
    cin>>n>>k;
    cout<<P[k][n]<<"\n";
}
int main()
{
    int t;
    cin>>t;
	pre();
    while(t--) 
    {
        solve();
    }    
    return 0;
}