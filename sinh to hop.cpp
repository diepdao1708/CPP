#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[20]={};
void in()
{
	for(int i=1; i<=k; i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}
void solve()
{
	for(int i=1; i<=k; i++)
	{
		a[i]=i;
	}
	while(1)
	{
		in();
		int i=k;
		while(a[i]==n-k+i) i--;
		if(i<1) break;
		a[i]++;
		for(int j=i+1; j<=k; j++)
		{
			a[j]=a[j-1]+1;
		}
	}
}

int main()
{
	cin>>n>>k;
	solve();
	return 0;
}
