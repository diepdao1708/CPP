#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[501][501]={};
int f[501][501]={};
void solve()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=m; i++) f[1][i]=a[1][i];
    for(int i=1; i<=n; i++) f[i][1]=a[i][1];
    int maxx=0;
    for(int i=2; i<=n; i++)
    {
        for(int j=2; j<=m; j++)
        {
            if(a[i][j]==1)
            {
                if(f[i-1][j-1]>0&&f[i-1][j]>0&&f[i][j-1]>0)
                {
                    f[i][j]=min(f[i-1][j-1], min(f[i-1][j], f[i][j-1]))+1;
                    if(f[i][j]>maxx) maxx=f[i][j];
                }
                else f[i][j]=1;
            }
            else f[i][j]=0;
        }
    }
    cout<<maxx<<'\n';
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