#include<bits/stdc++.h>
using namespace std;
int n;
int a[20]={};
void in()
{
	for(int i=1; i<=n; i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}
void solve()
{
	for(int i=1; i<=n; i++)
	{
		a[i]=i;
	}
	while(1)
	{
		in();
		int i=n-1;
		while(a[i+1]<a[i]) i--;
		if(i<1) break;
		int k=n;
		while(a[i]>a[k]) k--;
		swap(a[i], a[k]);
		sort(a+i+1, a+n+1);
	}
}

int main()
{
	cin>>n;
	solve();
	return 0;
}
