#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, a[1000];
void Run()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    long long x=0, y=0;
    for(int i=0; i<n; i++)
    {
        if(i & 1) x=x*10+a[i];
        else y=y*10+a[i];
    }
    long long sum=x+y;
    cout<<sum<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}