#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, a[100][100];
vector<string> res;
bool ok=0;
void BackTrack(int i, int j, string s)
{
    if(i==1 && j==1 && a[i][j]==0)
    {
        ok=0;
        return;
    }
    if(i==n && j==n && a[n][n]==1)
    {
        res.push_back(s);
        ok=1;
        return;
    }
    if(i<n && a[i+1][j]==1) BackTrack(i+1, j, s+"D");
    if(j<n && a[i][j+1]==1) BackTrack(i, j+1, s+"R");
}
void Run()
{
    res.clear();
    ok=0;
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin>>a[i][j];
    BackTrack(1, 1, "");
    if(!ok) cout<<-1;
    else
    {
        sort(res.begin(), res.end());
        for(int i=0; i<res.size(); i++) cout<<res[i]<<' ';
    }
    cout<<endl;
    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}