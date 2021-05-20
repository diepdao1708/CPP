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
ll k;
vector<ll> a;
void Run()
{
    cin>>n>>k;
    a.clear(); a.resize(n+1, 0);
    for(int i=1; i<=n; i++){
        ll x; cin>>x;
        a[i] = x + a[i-1];
    }
    for(int i=1; i<=n; i++){
        int it = lower_bound(a.begin(), a.end(), a[i] - k) - a.begin();
        if(it <= n && i != it && a[i] - a[it] == k){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
} 