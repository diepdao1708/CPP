#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;


void Run()
{
    int n, x, y, z;
    // x: insert
    // y: remove
    // z: copy
    cin>>n>>x>>y>>z;
    int dp[n+5]={0};
    dp[0]=0;
    dp[1]=x;
    for(int i=2; i<=n; i++)
    {
        if(i%2 == 0) dp[i] = min(dp[i-1] + x, dp[i/2] + z);
        else dp[i] = min(dp[i-1] + x, dp[(i+1)/2] + y + z);
    }
    cout<<dp[n]<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}