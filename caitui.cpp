#include<bits/stdc++.h>
using namespace std;
int n, v;
int a[1001]={}, c[1001]={};
int L[1001][1001]={};
void solve()
{
    
    cin>>n>>v;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cin>>c[i];
    for(int i=0; i<=v; i++) L[0][i]=0;
    int maxx=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=v; j++)
        {
            if(j-a[i]>=0) L[i][j]=max(L[i-1][j], c[i]+L[i-1][j-a[i]]);
            else L[i][j]=L[i-1][j];
            if(L[i][j]>maxx) maxx=L[i][j];
        }
    }
    cout<<maxx;
    cout<<'\n';
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