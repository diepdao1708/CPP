#include<bits/stdc++.h>
using namespace std;
bool Var(char c)
{
	return (c>='1'&&c<='9');
}
string s;
int exp(string s)
{
	int ans=0;
	int st[s.length()]={};
	int p=-1;
	for(int i=s.length()-1; i>=0; i--)
	{
		if(Var(s[i]))
		{
			st[++p]=s[i]-'0';
			continue;
		}
		if(s[i]=='*')
		{
			st[p-1]=st[p]*st[p-1];
			p--;
			continue;
		}
		if(s[i]=='/')
		{
			st[p-1]=st[p]/st[p-1];
			p--;
			continue;
		}
		if(s[i]=='+')
		{
			st[p-1]=st[p]+st[p-1];
			p--;
			continue;
		}
		if(s[i]=='-')
		{
			st[p-1]=st[p]-st[p-1];
			p--;
			continue;
		}
	}
	ans=st[0];
	return ans;
}
void solve()
{
	cin>>s;
	int ans=exp(s);
	cout<<ans;
	cout<<'\n';
}//solve
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