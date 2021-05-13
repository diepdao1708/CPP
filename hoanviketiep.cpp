#include<bits/stdc++.h>
using namespace std;
int n;
int a[1004]={};
bool check(int a[])
{
    int d=0;
    for(int i=n; i>=1; i--)
    {
        if(a[d]!=i) return 0;
        d++;
    }
    return 1;
}
void solve()
{
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    
    int ii=n-1;
    while(ii>=1&&a[ii+1]<a[ii]) ii--;
    if(ii==0) for(int i=1; i<=n; i++) cout<<i<<' ';
    else 
    {
        int jj=n;
        while(a[ii]>a[jj]) jj--;
        swap(a[ii], a[jj]);
        sort(a+1+ii, a+n+1);
        for(int i=1; i<=n; i++) cout<<a[i]<<' ';
    }
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