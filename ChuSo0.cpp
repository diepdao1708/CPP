#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
bool check(long long mid, long long n)
{
    long long tmp=mid, count=0, f=5;
    while(f<=tmp)
    {
        count+=tmp/f;
        f*=5;
    }
    return (count>=n);
}
long long find(long long n)
{
    if(n==1) return 5;
    long long l=0, r=5*n;
    while(l<r)
    {
        long long mid=(l+r)/2;
        if(check(mid, n)) r=mid;
        else l=mid+1;
    }
    return l;
}
void Run()
{
    long long n; cin>>n;
    cout<<find(n)<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}