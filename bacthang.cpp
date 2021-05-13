#include<bits/stdc++.h>
using namespace std;
int n, k;
const long long mod=1e9+7;
void solve()
{
    cin>>n>>k;
    int F[n+5]={};
    F[0]=F[1]=1;
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=min(i, k); j++)
        {
            F[i]+=F[i-j];
            F[i]%=mod;
        }
    }
    cout<<F[n]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}