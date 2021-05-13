#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
ll a[100][100];
int n, m;

void pre()
{
	for(int i=0; i<=25; i++) a[i][0]=1;
	for(int i=0; i<=25; i++) a[0][i]=1;
	a[0][0]=0;
	for(int i=1; i<=25; i++)
	{
		for(int j=1; j<=25; j++)
		{
			a[i][j]+=a[i-1][j]+a[i][j-1];
		}
	}	
}
void Run()
{
    
    cin>>n>>m;
	cout<<a[n][m]<<endl;
}
int main()
{
	pre();
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}