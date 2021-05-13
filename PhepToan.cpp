#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
ll n;
ll m;
vector<ll> a;
ll x[11];
bool ok=0;
void print()
{
    vector<ll> res;
    vector<ll> op;
    res.push_back(a[0]);
    for(int i=0; i<n-1; i++)
    {
        if(x[i]==0) { op.push_back(0); res.push_back(a[i+1]); }
        else if(x[i]==1) { op.push_back(1); res.push_back(a[i+1]); }
        else if(x[i]==2) 
        {
            res[res.size()-1]*=a[i+1];
        }
    }
    ll sum=res[0];
    for(int i=1; i<res.size(); i++)
    {
        if(op[i-1]==0) sum+=res[i];
        else sum-=res[i];
    }
    if(sum==m)
    {
        
        ok=1;
        if(a[0] < 0) cout<<"("<<a[0]<<")";
        else cout<<a[0];
        for(int i=1; i<n; i++)
        {
            if(x[i-1]==0) cout<<"+";
            else if(x[i-1]==1) cout<<"-";
            else if(x[i-1]==2) cout<<"*";
            if(a[i]<0) cout<<"("<<a[i]<<")";
            else cout<<a[i];
        }
        cout<<"="<<m<<endl;
    }
}
void Try(int i)
{
    for(int j=0; j<=2; j++)
    {
        x[i]=j;
        if(i==(n-2)) print();
        else Try(i+1);
    }
    return;
}
void Run()
{
    cin>>n>>m;
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    Try(0);
    if(ok==0) cout<<"IMPOSSIBLE";
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}