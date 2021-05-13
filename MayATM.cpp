#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
bool cmp(long long a, long long b)
{
	return a>b;
}
long long n, s, a[31];
long long sum=0, ok=0, c, cmin=1e9;
void atm(int k)
{
	for(int i=1; i>=0; i--)
	{
		sum+=(i*a[k]);
		c+=i;
		if(sum<s&&k<n-1) atm(k+1);
		if(ok==1) return;
		if(sum==s)
		{
			cmin=c;
			ok=1;
			return;
		}
		c-=i;
		sum-=(i*a[k]);

	}
	
}

void Run()
{
	sum=0, ok=0, c=0, cmin=1e9;
	cin>>n>>s;
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n, cmp);
	atm(0);
	if(cmin==1e9) cout<<-1;
	else cout<<cmin;
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}