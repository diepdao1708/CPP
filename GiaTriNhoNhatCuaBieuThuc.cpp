#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<long long> a, b;
int n, m;
bool cmp(long long a, long long b)
{
	return a>b;
}
void Run()
{
	a.clear(); b.clear();
	cin>>n;
	a.resize(n, 0);
	b.resize(n, 0);
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), cmp);
	long long res=0;
	for(int i=0; i<n; i++)
	{
		res+=(a[i]*b[i]);
	}
	cout<<res<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}