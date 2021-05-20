#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int a[100005]={};
int f[100005]={};
void Run()
{
    
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int maxx = 0;
    for(int i=1; i<=n; i++){
        f[a[i]] = f[a[i] - 1] + 1;
        maxx = max(maxx, f[a[i]]);
    }
    cout<<n-maxx;
    
}

int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}