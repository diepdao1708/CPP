#include<bits/stdc++.h>
using namespace std;
int k;
string s;
void solve()
{
	cin>>k>>s;
	for(int i=0; i<s.length(); i++)
	{
		char Max=s[s.length()-1];
		int vt=s.length()-1;
		for(int j=s.length()-1; j>i&&k>0; j--)
		{
			if(Max<s[j])
			{
				Max=s[j];
				vt=j;
			}
		}
		if(Max>s[i]&&k>0)
		{
			swap(s[i], s[vt]);
			k--;
		}
	}
	cout<<s;
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