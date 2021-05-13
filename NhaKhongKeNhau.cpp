#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;

ll n;
vector<ll> a, f;

void Run()
{
	cin>>n;
	a.clear(); a.resize(n);
	f.clear(); f.resize(n);
	for(int i=0; i<n; i++) cin>>a[i];
	if(n==1)
	{
		cout<<a[0];
		return;
	}
	if(n==2) 
	{
		cout<<max(a[0], a[1]);
		return;
	}
	f[0]=a[0];
	f[1]=max(a[1], a[0]);
	f[2]=max(a[0]+a[2], a[1]);
	ll maxx=f[2];
	for(int i=3; i<n; i++)
	{
		f[i]=a[i]+max(f[i-2], f[i-3]);
		maxx=max(maxx, f[i]);
	}
	cout<<maxx<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}