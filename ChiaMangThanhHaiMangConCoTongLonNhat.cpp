#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, k, a[100000];
void Run()
{
    cin>>n>>k;
    ll sum=0, tmp=0, tmp1=0;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a, a+n);
    for(int i=0; i<k; i++) tmp+=a[i];
    for(int i=0; i<n-k; i++) tmp1+=a[i];
    ll maxx=max(abs(sum-tmp*2), abs(sum-tmp1*2));
    cout<<maxx<<endl;
    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}