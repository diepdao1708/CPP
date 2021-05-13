#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
long long MAX=123456789;
long long n;
long long Poww(long long n, long long k)
{
	if(k==0) return 1;
	long long x=Poww(n,k/2);
	if(k%2==0) return x%MAX * x%MAX;
	return n*(x%MAX*x%MAX)%MAX;
}
void Run()
{
    cin>>n;
    cout<<Poww(2, n-1)<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}