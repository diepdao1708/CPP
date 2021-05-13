#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[1004]={};
bool check(int a[])
{
    for(int i=0; i<k; i++)
    {
        if(a[i]!=n-k+i+1) return 0;
    }
    return 1;
}
void solve()
{
    cin>>n>>k;
    for(int i=0; i<k; i++) cin>>a[i];
    if(check(a))
    {
        for(int i=0; i<k; i++) cout<<i+1<<' ';
    }
    else
    {
        int d=k-1;
        for(int i=k-1; i>=0; i--)
        {
            if(a[d]!=n-k+i+1) 
            {
                a[d]++;
                for(int j=i+1; j<k; j++) a[j]=a[j-1]+1;
                break;
            }
            d--;
        }
        for(int i=0; i<k; i++) cout<<a[i]<<' ';
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