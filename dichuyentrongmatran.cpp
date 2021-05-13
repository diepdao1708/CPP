#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int a[100][100];
int BackTrack(int i, int j)
{
    if(i==1 || j==1) return 1;
    return BackTrack(i-1, j) + BackTrack(i, j-1);
}
void Run()
{
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cin>>a[i][j];
    }
    cout<<BackTrack(n, m);
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}