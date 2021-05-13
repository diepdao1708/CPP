#include<bits/stdc++.h>
using namespace std;
int c, n;
int a[101]={};
int L[101][25001]={};
void Test()
{
    cin>>c>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=0; i<=n; i++) L[i][0]=0;
    for(int i=0; i<=c; i++) L[0][i]=0;
    int maxx=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=c; j++)
        {
            if(j>=a[i]) L[i][j]=max(L[i-1][j], L[i-1][j-a[i]]+a[i]);
            else L[i][j]=L[i-1][j];
            if(maxx<L[i][j]) maxx=L[i][j];
        }
    }
    cout<<maxx<<endl;
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    Test();
    return 0;
}