#include<bits/stdc++.h>
using namespace std;
int n, k, s;
int res=0;
int dd[10001]={};
void dequi(int dem, int sum, int vt)
{
    if(sum>s&&dem>k) return;
    if(sum==s&&dem==k)
    {
        res++;
        return;
    }
    for(int i=vt; i<=n; i++)
    {
        if(sum+i<=s&&dd[i]==0)
        {
            dd[i]=1;
            dequi(dem+1, sum+i, i+1);
            dd[i]=0;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    while(1)
    {
        cin>>n>>k>>s;
        res=0;
        if(n==0&&k==0&&s==0) break;
        dequi(0,0,1);
        cout<<res<<'\n';
    }
    return 0;
}