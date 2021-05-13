#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
ll poww(ll a, ll b)
{
	if(b==0) return 1;
	ll x=poww(a, b/2);
	if(b%2==0) return x*x;
	return x*x*a;
}
string DaoChuoi(string a)
{
	string s="";
	for(int i=a.length()-1; i>=0; i--)
	{
		s+=a[i];
	}
	return s;
}
string CoSo(ll n, ll m)
{
	string s="";
	while(m>0)
	{
		s+=(char)(m%n+'0');
		m/=n;
	}
	//for(int i=s.length()-1; i>=0; i--) cout<<s[i];
	return DaoChuoi(s);
}
void Run()
{
	ll n; cin>>n; cin.ignore();
	string a, b;
	cin>>a>>b;
	ll x=0, y=0;
	a=DaoChuoi(a);
	b=DaoChuoi(b);
	for(int i=0; i<a.length(); i++)
	{
		x+=1LL*(a[i]-'0')*poww(n, i);
	}
	for(int i=0; i<b.length(); i++)
	{
		y+=1LL*(b[i]-'0')*poww(n, i);
	}
	ll m=x+y;
	//cout<<m<<endl;
	cout<<CoSo(n, m)<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	//cout<<CoSo(8*1LL, 168*1LL);
	while(T--) Run();
	return 0;
}