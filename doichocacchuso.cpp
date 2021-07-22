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
/*
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

void quaylui(string s,int k,string &res,int pos)
{
    if(k==0) return;
    char c=s[pos];
    for(int j=pos+1;j<s.size();j++) c=max(c,s[j]);
    if(c!=s[pos]) k--;
    for(int i=pos;i<s.size();i++)
    {
        if(s[i]==c)
        {
            swap(s[i],s[pos]);
            if(s.compare(res)>0) res=s;
            quaylui(s,k,res,pos+1);
            swap(s[i],s[pos]);
        }
    }
}
void xuly()
{
   string s;
   int k;
   cin>>k>>s;
   string res=s;
   quaylui(s,k,res,0);
   cout<<res<<endl;
}
main()
{
    int h;
    cin>>h;
    while(h--) xuly();
}
*/