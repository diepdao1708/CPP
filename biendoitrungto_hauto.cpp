#include<bits/stdc++.h>
using namespace std;
string s;
string OP="+-*/^";
bool Op(char c)
{
	for(int i=0; i<OP.length(); i++)
	{
		if(OP[i]==c) return 1;
	}
	return 0;
}
bool Var(char c)
{
	
	return ((c>='A'&&c<='Z')||(c>='a'&&c<='z'));
}
int Deg(char c)
{
	if(c=='^') return 50;
	if(c=='*'||c=='/') return 100;
	if(c=='+'||c=='-') return 300;
	return 1000; 
}
string Complier(string s)
{
	string ans;
	stack<char> st;
	st.push('#');
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='(') 
		{
			st.push(s[i]);
			continue;
		}
		if(s[i]==')')
		{
			while(st.top()!='(')
			{
				ans+=st.top();
				st.pop();
			}
			st.pop();
			continue;
		}
		if(Var(s[i]))
		{
			ans+=s[i];
			continue;
		}
		if(Op(s[i]))
		{
			while(Deg(st.top())<=Deg(s[i]))
			{
				ans+=st.top();
				st.pop();
			}
			st.push(s[i]);
			continue;
		}
	}
	while(st.top()!='#')
	{
		ans+=st.top();
		st.pop();
	}
	return ans;
}//conplier
void solve()
{
	cin>>s;
	s=Complier(s);
	cout<<s;
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