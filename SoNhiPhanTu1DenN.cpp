#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
void show(deque<int> d)
{
	while(!d.empty())
	{
		cout<<d.back();
		d.pop_back();
	}
	cout<<' ';
}
void Run()
{
	
	int n; cin>>n;
	for(int i=1; i<=n; i++)
	{
		int k=i;
		deque<int> d;
		while(k>0)
		{
			d.push_back(k%2);
			k=k/2;
		}
		
		show(d);
	}
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}