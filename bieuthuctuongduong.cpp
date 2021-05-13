#include<bits/stdc++.h>
using namespace std;
string s;
void solve()
{
	cin>>s;
	stack<char> st;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]!=')') 
		{
			st.push(s[i]);
		}
		else 
		{
			string a="";
			while(st.top()!='(')
			{
				a=st.top()+a;
				st.pop();
			}
			
			st.pop();
			if(st.size()>0)
			{
				if(st.top()=='+'||st.top()=='(')
				{
					for(int j=0; j<a.length(); j++) st.push(a[j]);
				}
				if(st.top()=='-')
				{
					for(int j=0; j<a.length(); j++)
					{
						if(a[j]=='+') a[j]='-';
						else if(a[j]=='-') a[j]='+';
					}
					for(int j=0; j<a.length(); j++) st.push(a[j]);
				}
			}
			else 
			{
				for(int j=0; j<a.length(); j++) st.push(a[j]);
				
			}
		} 
	}
	string s1="";
	while(st.size()!=0)
	{
		s1=st.top()+s1;
		st.pop();
	}
	cout<<s1;
	cout<<'\n';
}
int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	cin.ignore();
	while(t--) solve();
	return 0;
}