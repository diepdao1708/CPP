#include<bits/stdc++.h>
using namespace std;
int n;
int a[20]={};
char b[20]={};
vector<string> res;
void xuly(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        b[i+1]=s[i];
    }
}
void solve(string s, int k)
{
	xuly(s);
	for(int i=1; i<=k; i++) a[i]=i;
	while(1)
	{
		string s1="";
		for(int i=1; i<=k; i++) s1=s1+b[a[i]];
		res.push_back(s1);
		int i=k;
		while(a[i]==n-k+i) i--;
		if(i<1) break;
		a[i]++;
		for(int j=i+1; j<=k; j++)
		{
			a[j]=a[j-1]+1;
		}
	}
}
void test()
{
	res.clear();
	cin>>n;
	cin.ignore();
	string s;
	cin>>s;
	for(int i=1; i<=n; i++) solve(s, i);
	sort(res.begin(), res.end());
	for(int i=0; i<res.size(); i++) cout<<res[i]<<' ';
	cout<<'\n';
}
int main()
{
	int t;
	cin>>t;
	while(t--) test();
	return 0;
}
