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
long long dao(long long n)
{
    long long res=0;
    while(n>0)
    {
        res=res*10+n%10;
        n/=10;
    }
    return res;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<Poww(n, dao(n))<<endl;
    }
    return 0;
}