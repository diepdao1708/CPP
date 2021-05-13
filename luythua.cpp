#include<bits/stdc++.h>
using namespace std;
long long MAX=1000000007;
long long Poww(long long n, long long k)
{
	if(k==0) return 1;
	long long x=Poww(n,k/2);
	if(k%2==0) return x%MAX * x%MAX;
	return n*(x%MAX*x%MAX)%MAX;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        cout<<Poww(n, x)<<endl;
    }
    return 0;
}