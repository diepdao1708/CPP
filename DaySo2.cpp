#include<bits/stdc++.h>
using namespace std;
int n, a[1000]={};
vector<vector<int> > kq;
void Try(int n)
{
    vector<int> f;
    if(n==0) return; 
    for(int j=0; j<n; j++) 
    {
        f.push_back(a[j]);
    }
    kq.push_back(f);
    for(int j=0; j<n-1; j++) 
    {
        a[j]=a[j]+a[j+1];
    }
    Try(n-1);
    
}
void solve()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    Try(n);
    for(int i=kq.size()-1; i>=0; i--)
    {
        vector<int> k=kq[i];
        cout<<'[';
        for(int j=0; j<k.size(); j++)
        {
            cout<<k[j];
            if(j!=k.size()-1) cout<<' ';
        }
        cout<<']';
        cout<<' ';
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        solve();
        kq.clear();
    }
    return 0;
}