#include<bits/stdc++.h>
using namespace std;
int n;
long long f[51]={};
void pre()
{
    f[1]=1;
    f[2]=2;
    f[3]=4;
    for(int i=4; i<=50; i++) f[i]=f[i-1]+f[i-2]+f[i-3];
}
void solve()
{
    cin>>n;
    cout<<f[n];
    cout<<'\n';
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) 
    {
        pre();
        solve();
    }
    return 0;
}