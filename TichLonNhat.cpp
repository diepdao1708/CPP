#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<ll> a;
int n;
ll res = 0;
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++){
        ll x; cin>>x;
        if(x == 0) continue;
        a.push_back(x);
    }
    if(a.size() < 2) {
        cout<<0;
        return;
    }
    if(a.size() == 2) {
        res = a[0] * a[1];
        if(res < 0) res = 0;
        cout<<res;
        return;
    }
    bool ok = 0;
    if(n == a.size()) ok = 1;
    else ok = 0;
    sort(a.begin(), a.end());
    n = a.size();
    res = max(a[0] * a[1], max(a[0] * a[1] * a[2], max(a[n-1] * a[n-2], max(a[n-1] * a[n-2] * a[n-3], a[0] * a[1] * a[n-1]))));
    if(res < 0 && ok == 0) res = 0;
    cout<<res;
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}