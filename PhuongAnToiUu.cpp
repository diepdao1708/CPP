#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, k, maxx=0;
vector<int> res;
vector<int> a, b, c;
void print()
{
    int sum=0;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(b[i]) 
        {
            sum+=a[i];
            ans+=c[i];
        }
    }
    if(sum<=k && ans>maxx) 
    {
        for(int i=0; i<n; i++) res[i]=b[i];
        maxx=ans;
    } 
   
}
void BackTrack(int i)
{
    for(int j=0; j<=1; j++)
    {
        b[i]=j;
        if(i==n-1) print();
        else BackTrack(i+1);
    }
}
void Run()
{
    cin>>n>>k;
    a.resize(n, 0);
    b.resize(n, 0);
    c.resize(n, 0);
    res.resize(n, 0);
    for(int i=0; i<n; i++) cin>>c[i];
    for(int i=0; i<n; i++) cin>>a[i];
    BackTrack(0);
    cout<<maxx<<endl;
    for(int i=0; i<res.size(); i++) cout<<res[i]<<' ';
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}