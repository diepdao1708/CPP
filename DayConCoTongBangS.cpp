#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, s, a[10000];
void Run()
{
    cin>>n>>s;
    for(int i=1; i<=n; i++) cin>>a[i];
    int L[40005]={};
    L[0]=1;
    for(int i=1; i<=n; i++)
    {
        for(int t=s; t>=a[i]; t--)
        {
            if(L[t]==0 && L[t-a[i]]==1) L[t] = 1;
        }
    }
    if(L[s]) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}