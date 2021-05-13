#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<vector<int> > res;
int n;
vector<bool> vis;
int minn=1e9;
void BackTrack(int u, int s, int w)
{
    if(w>=minn) return;
    if(s==n)
    {
        w+=res[u][1];
        minn=min(w, minn);
        return;
    }
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            BackTrack(i, s+1, w+res[u][i]);
            vis[i]=0;
        }
    }
}
void Run()
{
    cin>>n;
    res.resize(n+1);
    vis.resize(n+1, 0);
    for(int i=1; i<=n; i++)
    {
        res[i].resize(n+1);
        for(int j=1; j<=n; j++) cin>>res[i][j];
    }
    vis[1]=1;
    BackTrack(1, 1, 0);
    cout<<minn;
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}