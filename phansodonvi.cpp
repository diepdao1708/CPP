#include<bits/stdc++.h>
using namespace std;
unsigned long long a, b;
void solve()
{
	cin>>a>>b;
	while(b%a!=0)
	{
		unsigned long long n=a, m=b;
		unsigned long long x=b/a;
		cout<<1<<"/"<<x+1<<" + ";
		a=(x+1)*n-m;
		b=(x+1)*b;
	}
	cout<<1<<"/"<<b/a;
	cout<<'\n';
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