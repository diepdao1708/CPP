#include<bits/stdc++.h>
using namespace std;
int MAX=1000000007;
int Poww(int n, int k)
{
	if(k==0) return 1;
	int x=Poww(n,k/2);
	if(k%2==0) return x%MAX * x%MAX;
	return n*(x%MAX*x%MAX)%MAX;
}
int poww(int a, int b)
{
	int res=1;
	for(int i=b;i;i>>=1)
	{
		if (i&1) res=res*a;
		a*=a;
	}
	return res;
}
int main()
{
    int n,x;
    cin>>n>>x;
    cout<<Poww(n, x);
    return 0;
}