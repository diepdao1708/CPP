#include<bits/stdc++.h>
using namespace std;
int n;
long long a[1001]={}, L[1001]={};
void solve()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        L[i]=a[i];
        for(int j=0; j<i; j++)
        {
            if(a[i]>a[j]&&L[i]<L[j]+a[i]) L[i]=L[j]+a[i];
        }
    }
    long long res=0;
    for(int i=0; i<n; i++) 
        if(L[i]>res) res=L[i];
    cout<<res;
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