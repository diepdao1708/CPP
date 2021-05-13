#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, a[100];
void cs(long long k)
{
    while(k>0)
    {
        a[k%10]=1;
        k/=10;
    }
}
void Run()
{
    cin>>n;
    for(int i=0; i<=9; i++) a[i]=0;
    for(int i=0; i<n; i++)
    {
        long long tmp; cin>>tmp;
        cs(tmp);
    }
    for(int i=0; i<=9; i++)
    {
        if(a[i]) cout<<i<<' ';
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