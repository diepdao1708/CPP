#include<bits/stdc++.h>
using namespace std;
int n;
int a[1001]={};
void solve()
{
    cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	int L[1001]={};
	for(int i=1; i<=n; i++)
	{
		L[i]=1;
		for(int j=1; j<i; j++)
		{
			if(a[j]<=a[i]&&L[i]<L[j]+1) L[i]=L[j]+1;
		}
	}
	int maxx=0;
	for(int i=1; i<=n; i++) 
		if(L[i]>maxx) maxx=L[i];
    cout<<n-maxx<<'\n';
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