#include<bits/stdc++.h>
using namespace std;
string s;
void solve()
{
	cin>>s;
	stack<char> st;
	//st.push(s[0]);
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]==')')
		{
			if(st.size()>0&&st.top()=='(')
			{
				st.pop();
			}
			else st.push(s[i]);
		}
		else if(s[i]=='(') st.push(s[i]);
	}
	int dem=0;
	while(st.size()>0)
	{
		if(st.size()%2==0&&st.top()=='(') dem++;
		if(st.size()%2==1&&st.top()==')') dem++;
		st.pop();
	}
	cout<<dem;
	cout<<'\n';
}//solve
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