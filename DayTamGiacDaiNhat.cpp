#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
#define ll long long
using namespace std;
const int oo = 1e9;
void Run()
{
    int n; cin>>n;
    vector<int> a(n+1), L(n+1, 0), R(n+1, 0);
    for(int i=0; i<n; i++) cin>>a[i];
    L[0] = 1;
    for(int i=1; i<n; i++)
    {
        L[i]=1;
        if(a[i] > a[i - 1]) L[i] = L[i - 1] + 1;  
    }
    R[n-1]=1;
    for(int i=n-2; i>=0; i--)
    {
        R[i]=1;
        if(a[i] > a[i + 1]) R[i] = R[i + 1] + 1; 
    }
    int maxx = 0;
    for(int i=0; i<n; i++) {
        maxx = max(maxx, L[i] + R[i] - 1);
    }
    cout<<maxx<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}