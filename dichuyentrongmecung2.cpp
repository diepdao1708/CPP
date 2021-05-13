#include<bits/stdc++.h>
using namespace std;
int n;  
int a[10][10]={};
bool dd[10][10]={};
vector<string> res;
bool ok=0;
void Try(int i, int j, string s)
{
    if(a[0][0]==0) return;
    if(i+1==n&&j+1==n) 
    {
        ok=1;
        res.push_back(s);
        return;
    }
    if(i+1<n&&a[i+1][j]==1&&dd[i+1][j]==0)
    {
        dd[i+1][j]=1;
        Try(i+1, j, s+'D');
        dd[i+1][j]=0;
    }
    if(j+1<n&&a[i][j+1]==1&&dd[i][j+1]==0)
    {
        dd[i][j+1]=1;
        Try(i, j+1, s+'R');
        dd[i][j+1]=0;
    }
    if(i-1>=0&&a[i-1][j]==1&&dd[i-1][j]==0)
    {
        dd[i-1][j]=1;
        Try(i-1, j, s+'U');
        dd[i-1][j]=0;
    }
    if(j-1>=0&&a[i][j-1]==1&&dd[i][j-1]==0)
    {
        dd[i][j-1]=1;
        Try(i, j-1, s+'L');
        dd[i][j-1]=0;
    }
}
void solve()
{
    res.clear();
    ok=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            dd[i][j]=0;
        }
    }
    dd[0][0]=1;
    Try(0,0,"");
    if(ok==0) cout<<"-1";
    else
    {
        sort(res.begin(), res.end());
        for(int i=0; i<res.size(); i++) cout<<res[i]<<' ';
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