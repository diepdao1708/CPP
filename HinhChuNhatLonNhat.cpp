#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
ll n, h[100005], L[100005], R[100005];
deque<ll> dp;
void Run()
{
    cin>>n;
    for(int i=1; i<=n; i++) 
    {
        cin>>h[i];
        L[i]=0;
        R[i]=0;
    }
    dp.clear();
    dp.push_back(0);
    for(int i=1; i<=n; i++)
    {
        while(dp.size() > 0 && h[dp.back()] >= h[i]) dp.pop_back();
        L[i] = dp.back() + 1;
        dp.push_back(i);
    }
    while(!dp.empty()) dp.pop_back();
    dp.push_back(n+1);
    for(int i=n; i>=1; i--)
    {
        while (dp.size() > 0 && h[dp.back()] >= h[i]) dp.pop_back();
        R[i] = dp.back() - 1;
        dp.push_back(i);
    }
    ll maxx=0;
    for(int i=1; i<=n; i++)
    {
        maxx=max(maxx, (R[i] - L[i] + 1) * h[i]);
    }
    cout<<maxx<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}