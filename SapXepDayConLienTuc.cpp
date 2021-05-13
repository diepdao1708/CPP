
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, a[1000005], b[1000005];
void Run()
{
    cin>>n;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a, a+n);
    int l=0, r=n-1;
    for(int i=0; i<n; i++) 
    {
        if(a[i]!=b[i]) 
        {
            l=i+1;
            break;
        }
    }
    for(int i=n-1; i>=0; i--) 
    {
        if(a[i]!=b[i]) 
        {
            r=i+1;
            break;
        }
    }
    cout<<l<<' '<<r;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}