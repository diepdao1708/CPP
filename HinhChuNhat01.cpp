#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > a;
void solve()
{
    a.clear();
    a.resize(1004, vector<int> (1004));
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[j][i]==1)
            {
                a[j][i]+=a[j-1][i];
            }
        }
    }
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        stack<int> tmp1;
        tmp1.push(0);
        int trai[1002]={};
        int phai[1002]={};
        for(int j=1; j<=m; j++)
        {
            while(tmp1.size()!=0&&a[i][tmp1.top()]>=a[i][j]) tmp1.pop();
            if(tmp1.size()!=0) trai[j]=tmp1.top();
            else trai[j]=0;
            tmp1.push(j);
        }
        stack<int> tmp2;
        tmp2.push(m+1);
        for(int j=m; j>=1; j--)
        {
            while(tmp2.size()!=0 && a[i][tmp2.top()]>=a[i][j]) tmp2.pop();
            if(tmp2.size()!=0) phai[j]=tmp2.top();
            else phai[j]=m+1;
            tmp2.push(j);
        }
        int res=0;
        for(int j=1; j<=m; j++)
        {
            int k=phai[j]-trai[j]-1;
            res=max(res, k*a[i][j]);
        }
 
        ans=max(ans,res);
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    
    return 0;
} 