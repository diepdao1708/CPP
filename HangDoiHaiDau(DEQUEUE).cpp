#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
deque<int> d;
void printBack(deque<int> d)
{
	if(d.size()==0) cout<<"NONE";
	else cout<<d.back();
	cout<<endl;
}
void printFront(deque<int> d)
{
	if(d.size()==0) cout<<"NONE";
	else cout<<d.front();
	cout<<endl;
}
void Run()
{
	string s;
	cin>>s;
	if(s=="PUSHBACK") 
	{
		int n; cin>>n;
		d.push_back(n);
	}
	if(s=="PUSHFRONT")
	{
		int n; cin>>n;
		d.push_front(n);
	}
	if(s=="PRINTFRONT") printFront(d);
	if(s=="PRINTBACK") printBack(d);
	if(s=="POPBACK")
	{
		if(d.size()) d.pop_back();
	}
	if(s=="POPFRONT")
	{
		if(d.size()) d.pop_front();
	}
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}