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

const ll mod = 1e9+7;
ll a[11][11], I[11][11]={}, b[11][11];
void mulMatrix(ll a[11][11], ll b[11][11])
{
    ll ans[11][11];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            ll tmp=0;
            for(int k=1; k<=n; k++)
            {
                tmp=(tmp+(a[i][k]*b[k][j])%mod)%mod;
            }
            ans[i][j]=tmp;
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) a[i][j]=ans[i][j];
    }
}
void powerMatrix(ll a[11][11], ll k)
{
    if(k<=1) return;
    powerMatrix(a, k/2);
    mulMatrix(a, a);
    if(k%2) mulMatrix(a, b);
}
void Run()
{
    ll k;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) 
        {
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    for(int i=1; i<=n; i++) I[i][i]=1;
    if(k==0)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++) cout<<I[i][j]<<' ';
            cout<<endl;
        }
    }
    powerMatrix(a, k);
    ll res=0;
    for(int i=1; i<=n; i++)
    {
        res=(res+a[i][i])%mod;
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