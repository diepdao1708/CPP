#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<long long> res;
void pre()
{
	ll maxx=1e18;
	for(ll a=1; a<=maxx; a*=2)
	{
		for(ll b=1; a*b<=maxx; b*=3)
		{
			for(ll c=1; a*b*c<=maxx; c*=5)
			{
				res.push_back(a*b*c);
			}
		}
	}
	sort(res.begin(), res.end());
}
void Run()
{
	long long n; cin>>n;
	ll p=lower_bound(res.begin(), res.end(), n)-res.begin();
	if(p==(ll)res.size()||res[p]!=n) cout<<"Not in sequence";
	else cout<<p+1;
	cout<<endl;
}
int main()
{
	pre();
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}