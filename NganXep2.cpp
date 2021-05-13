#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
stack<int> st;
void show(stack<int> st)
{
	if(st.size()==0) cout<<"NONE";
	else cout<<st.top();
	cout<<endl;
}
void Run()
{
	string s;
	cin>>s;
	if(s=="PUSH") 
	{
		int n; cin>>n;
		st.push(n);
	}
	if(s=="PRINT") show(st);
	if(st.size() > 0 && s=="POP") st.pop();
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}