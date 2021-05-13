#include<bits/stdc++.h>
using namespace std;
int F[100005]={};
bool check(int n)
{
    if(n==0) return 1;
    bool dd[10]={0};
    while(n)
    {
        int tmp=n%10;
        n=n/10;
        if(tmp>5) return 0;
        if(dd[tmp]) return 0;
        dd[tmp]=1;
    }
    return 1;
}
void pre()
{
    for(int i=0; i<=100000; i++)
    {
        if(check(i)) F[i]=1;
    }
}
void solve()
{
    int l,r;
    cin>>l>>r;
    int dem=0;
    for(int i=l; i<=r; i++) if(F[i]) dem++;
    cout<<dem<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--)
    {
        pre();
        solve();
    }
    return 0;
}