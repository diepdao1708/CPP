#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
void show(stack<int> st)
{
	if(st.size()==0) cout<<"empty";
	int a[1000]={}, i=0;
	while(st.size()>0)
	{
		a[i++]=st.top();
		st.pop();
	}
	for(int j=i-1; j>=0; j--) cout<<a[j]<<' ';
	cout<<endl;
}
void Run()
{
	string s;
	stack<int> st;
	while(cin>>s)
	{
		if(s=="push") 
		{
			int n; cin>>n;
			st.push(n);
		}
		if(s=="show") show(st);
		if(s=="pop") st.pop();
	}
}
int main()
{
	int T=1;
	//cin>>T;
	while(T--) Run();
	return 0;
}