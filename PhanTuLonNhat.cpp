#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, k, a[10000];
void Run()
{
    cin>>n>>k;
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    for(int i=n-1; i>=n-k; i--) cout<<a[i]<<' ';
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}