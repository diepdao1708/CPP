#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
const int mod = 1e9+7;
int n, a[10000007];
void Run()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    ll res=0;
    for(int i=0; i<n; i++)
    {
        res=(res+a[i]*i)%mod;
    }
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}