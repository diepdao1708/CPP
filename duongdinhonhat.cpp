#include<bits/stdc++.h>
using namespace std;
int n, m;
int l[1001][1001]={};
void solve()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>l[i][j];
        }
    }
    for(int i=1; i<m; i++) l[0][i]+=l[0][i-1];
    for(int i=1; i<n; i++) l[i][0]+=l[i-1][0]; 
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            int tmp=l[i-1][j-1];
           if(i-1>=0) tmp=min(tmp, l[i-1][j]);
           if(j-1>=0) tmp=min(tmp, l[i][j-1]);
           l[i][j]+=tmp;
        }
    }
    cout<<l[n-1][m-1]<<'\n';
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