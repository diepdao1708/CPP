#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
queue<int> st;
void show(queue<int> st)
{
	if(st.size()==0) cout<<"NONE";
	else cout<<st.front();
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
	if(s=="PRINTFRONT") show(st);
	if(st.size() > 0 && s=="POP") st.pop();
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}