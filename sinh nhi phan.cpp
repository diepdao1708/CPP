#include<bits/stdc++.h>
using namespace std;
int n;
int a[20]={};
void in()
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}
void solve()
{
	for(int i=0; i<n; i++)
	{
		a[i]=0;
	}
	while(1)
	{
		in();
		int i=n-1;
		while(i>=0&&a[i]==1) i--;
		if(i<0) break;
		a[i]=1;
		for(int j=i+1; j<n; j++)
		{
			a[j]=0;
		}
	}
}

int main()
{
	cin>>n;
	solve();
	return 0;
}
