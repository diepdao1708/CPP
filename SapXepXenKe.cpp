#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, a[10000];
void Run()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    int l=0, r=n-1;
    while(l<=r)
    {
        if(l==r) cout<<a[r]<<' ';
        else cout<<a[r]<<' '<<a[l]<<' ';
        r--; l++;
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}