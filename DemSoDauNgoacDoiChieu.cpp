#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;


void Run()
{
	string s; cin>>s;
	stack<char> st;
	if(s.length()%2==1) 
	{
		cout<<-1<<endl;
		return;
	}
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == ')'&& !st.empty())
		{
			if(st.top()=='(')
			{
				st.pop();
			}
			else
			{
				st.push(s[i]);
			}
		}
		else
		{
			st.push(s[i]);
		}
	}
	int tmp=st.size();
	int n=0;
	while(!st.empty() && st.top()=='(')
	{
		st.pop();
		n++;
	}
	cout<<(tmp/2 + n%2)<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}