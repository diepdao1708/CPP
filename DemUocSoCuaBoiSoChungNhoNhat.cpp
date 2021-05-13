#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
const int mod=1e9+7;
void Run()
{
    int n; cin>>n;
    int a[100005]={};
    for(int i=1; i<=n; i++)
    {
        int tmp=i;
        for(int j=2; j<=sqrt(tmp); j++)
        {
            int dem=0;
            while(tmp%j==0)
            {
                dem++;
                tmp/=j;
            }
            a[j]=max(a[j], dem);
        }
        if(tmp>1) a[tmp]=max(a[tmp], 1);
    }
    long long res=1;
    for(int i=1; i<=n; i++)
    {
        if(a[i]>0) res=(res*(a[i]+1))%mod;
    }
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}