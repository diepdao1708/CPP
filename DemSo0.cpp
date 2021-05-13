#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, m, k, a[1000005];
int dem(int l, int r)
{
    int res=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==0) 
        {
            res+=(mid-l+1);
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return res;
}
void Run()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<dem(0, n-1)<<endl;
    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}