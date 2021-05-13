#include<bits/stdc++.h>
using namespace std;
long long n, k;
long long F[11][11]={}, M[11][11]={};
const long long mod=1e9+7;
void Nhan_Ma_Tran(long long f[11][11], long long m[11][11])
{
    long long c[11][11]={};
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n; k++)
        {
            for(int j=1; j<=n; j++)
                c[i][k]=(c[i][k]+(f[i][j]*m[j][k])%mod)%mod;
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n; k++)
        {
            F[i][k]=c[i][k];
        }
    }
}
void poww(long long f[11][11], long long n)
{
    if(n<=1) return;
    poww(f, n/2);
    Nhan_Ma_Tran(f, f);
    if(n%2==1) Nhan_Ma_Tran(f, M);

}
void solve()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>F[i][j];
            M[i][j]=F[i][j];
        }
    }
    poww(F, k);
    //cout<<'\n';
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) 
        {
            cout<<F[i][j]<<' ';
        }
        cout<<'\n';
    }
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}