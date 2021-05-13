#include<bits/stdc++.h>
using namespace std;
int n;
int a[11]={};
vector<string> res;
void in()
{
	string b="";
	for(int i=1; i<=n; i++) 
	{
		char c=a[i]+'0';
		b=b+c;
	}
	res.push_back(b);
}
void solve()
{
	cin>>n;
	string d="";
	for(int i=1; i<=n; i++) a[i]=i;
	res.push_back(d);
	while(1)
	{
		in();
		int i=n-1;
		while(a[i]>a[i+1]) i--;
		if(i<1) break;
		int k=n;
		while(a[i]>a[k]) k--;
		swap(a[i], a[k]);
		sort(a+i+1, a+n+1);
	}
	for(int i=res.size()-1; i>0; i--) cout<<res[i]<<' ';
	res.clear();
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