#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
ll power(int n, int a)
{
	if(a==0) return 1;
	ll x=power(n, a/2);
	if(a%2==0) return x*x;
	return x*x*n;
}
void Run()
{
	string a, b; cin>>a>>b;
	ll x=0, y=0;
	for(int i=a.length()-1; i>=0; i--)
	{
		int k=a.length()-1-i;
		if(a[i]=='1') x=x+power(2, k);
	}
	for(int i=b.length()-1; i>=0; i--)
	{
		int k=b.length()-1-i;
		if(b[i]=='1') y=y+power(2, k);
	}
	cout<<x*y<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}