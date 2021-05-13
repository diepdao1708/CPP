#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int n, k;
long long C[1001][1001]={};
void pre()
{
    for(int i=0; i<=1000; i++) 
    {
        C[i][0]=1;
        C[i][i]=1;
    }
    for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<=1000; j++)    
            C[i][j]=(C[i-1][j]+C[i-1][j-1])%mod;
    }

}
void solve()
{
    cin>>n>>k;
    cout<<C[n][k];
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