#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n;
vector<int> a;
void Run()
{
    cin>>n;
    a.clear(); a.resize(n+1);
    int bi1[105]={}, bi2[105]={};
    for(int i=1; i<=n; i++) 
    {
        cin>>a[i];
        bi1[i]=a[i];
        bi2[i]=a[i];
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<i; j++)
        {
            if(a[i] > a[j])
            {
                bi1[i]=max(bi1[i], bi1[j]+a[i]);
            }
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        for(int j=n; j>i; j--)
        {
            if(a[i] > a[j])
            {
                bi2[i] = max(bi2[i], bi2[j] + a[i]);
            }
        }
    }
    
    int res=0;
    for(int i=1; i<=n; i++)
    {
        res = max(res, bi1[i] + bi2[i] - a[i]);
    }
    cout<<res<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}