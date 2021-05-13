#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n;
vector<int> a;
void Run()
{
    cin>>n;
    a.clear(); a.resize(n+1);
    for(int i=1; i<=n; i++) cin>>a[i];
    int L[n+5]={};
    L[1]=a[1];
    L[2]=max(a[1], a[2]);
    for(int i=3; i<=n; i++)
    {
        L[i]=max(L[i-2] + a[i], L[i-1]);
    }
    cout<<L[n]<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}