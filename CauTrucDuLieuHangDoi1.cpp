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
	int n; cin>>n;
	queue<int> q;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		if(x==1) cout<<q.size()<<endl;
		if(x==2)
		{
			if(q.size()) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
		if(x==3)
		{
			int tmp; cin>>tmp;
			q.push(tmp);
		}
		if(x==4) 
		{
			if(q.size()) q.pop();
		}
		if(x==5)
		{
			if(q.size()) cout<<q.front()<<endl;
			else cout<<"-1"<<endl;
		}
		if(x==6)
		{
			if(q.size()) cout<<q.back()<<endl;
			else cout<<"-1"<<endl;
		}
	}
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}