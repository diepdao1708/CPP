#include<bits/stdc++.h>
using namespace std;
int n, a[1000]={};
void Try(int n)
{
    if(n==0) return; 
    cout<<'[';
    for(int j=0; j<n; j++) 
    {
        cout<<a[j];
        if(j!=n-1) cout<<' ';
    }
    cout<<']'<<endl;
    
    for(int j=0; j<n-1; j++) a[j]=a[j]+a[j+1];
    Try(n-1);
    
}
void solve()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    Try(n);
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}