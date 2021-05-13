#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, k;
vector<int> a;
const int mod=1e9+7;
void Run()
{
    cin>>n>>k;
    a.clear(), a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    long long L[k+5]={};
    L[0]=1;
    for(int i=1; i<=k; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i>=a[j])
            {
                L[i] = (L[i]+L[i-a[j]]) % mod;
            }
        }
    }
    cout<<L[k]<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}