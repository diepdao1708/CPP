#include<iostream>
#include<stack>
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
			string tmp="";
			tmp=tmp+'('+st.top(); st.pop();
			tmp+=s[i];
			tmp=tmp+st.top()+')'; st.pop();
			st.push(tmp);
		}
		else st.push(string(1, s[i]));
	}
	cout<<st.top()<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--) Run();
	return 0;
}