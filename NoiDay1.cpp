#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
ll n;
void Run()
{
    cin>>n;
    priority_queue<ll, vector<ll>, greater<ll> > q;
    for(int i=0; i<n; i++)
    {
        int tmp;
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
        sum+=(x+y);
        q.push(x+y);
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