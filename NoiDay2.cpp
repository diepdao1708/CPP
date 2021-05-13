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
const ll mod=1e9+7;
void Run()
{
    cin>>n;
    priority_queue<ll, vector<ll>, greater<ll> > q;
    for(int i=0; i<n; i++)
    {
        ll tmp;
        cin>>tmp;
        q.push(tmp);
    }
    long long sum=0;
    while(q.size()>1)
    {
        ll x = q.top();
        q.pop();
        ll y = q.top();
        q.pop();
        sum=(sum+(x+y)%mod)%mod;
        q.push((x+y)%mod);
    }
    cout<<sum<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}