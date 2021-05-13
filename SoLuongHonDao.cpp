#include<bits/stdc++.h>
using namespace std;
int a[501][501]={};
int n, m;
bool dd[501][501]={};
pair<int, int> b[8]={make_pair(-1, 0), make_pair(1, 0), make_pair(0, 1), make_pair(0, -1), make_pair(-1, -1), make_pair(-1, 1), make_pair(1, 1), make_pair(1, -1)};
void loang(int ii, int jj)
{
    queue <pair<int, int> > q;
    q.push(make_pair(ii, jj));
    dd[ii][jj]=1;
    while(q.size()>0)
    {
        pair<int, int> u=q.front();
        q.pop();
        for(int i=0; i<8; i++)
        {
            pair<int, int> v=make_pair(u.first+b[i].first, u.second+b[i].second);
            if(v.first>=1&&v.first<=n&&v.second>=1&&v.second<=m&&dd[v.first][v.second]==0&&a[v.first][v.second]==1)
            {
                dd[v.first][v.second]=1;
                q.push(v);
            }
        }
    }
}
void Run()
{
    cin>>n>>m;
    vector<pair<int, int> > luu;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            dd[i][j]=0;
            cin>>a[i][j];
            if(a[i][j]==1) luu.push_back(make_pair(i, j));
        }
    }
    int dem=0;
    for(int i=0; i<luu.size(); i++)
    {
        if(dd[luu[i].first][luu[i].second]==0)
        {
            dem++;
            loang(luu[i].first, luu[i].second);
        }
    }
    cout<<dem<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) Run();
    return 0;
}