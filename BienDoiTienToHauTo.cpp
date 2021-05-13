#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
string OP="+-*/";
bool Op(char c)
{
	for(int i=0; i<OP.length(); i++)
	{
		if(OP[i]==c) return 1;
	}
	return 0;
} //OP
bool Var(char c)
{
	return ((c>='a'&&c<='z')||(c>='A'&&c<='Z'));
}

void Run()
{
	string s; cin>>s;
	stack<string> st;
	for(int i=s.length()-1; i>=0; i--)
	{
		if(Op(s[i]))
		{
			string tmp1=st.top(); st.pop();
			string tmp2=st.top(); st.pop();
			string tmp=tmp1+tmp2+s[i];
			st.push(tmp);
		}
		else
		{
			st.push(string(1, s[i]));
		}
	}
	cout<<st.top()<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}