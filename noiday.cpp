#include<bits/stdc++.h>
using namespace std;
int n;

void solve()
{
    cin>>n;
    priority_queue<long long, vector<long long>, greater<long long> > q;
    for(int i=0; i<n; i++) 
    {
        int m;
        cin>>m;
        q.push(m);
    }
    long long kq=0;
    while(q.size()>1)
    {
        long long res=0;
        res=q.top()+res;
        q.pop();
        res=q.top()+res;
        q.pop();
        kq+=res;
        //cout<<kq<<' ';
        q.push(res);
    }
    cout<<kq<<'\n';

}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}