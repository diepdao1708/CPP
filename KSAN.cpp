#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int> > q;
    vector<int> a,b;
    b.resize(n);
    a.resize(n);
    int maxx=0;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        int so;
        cin>>so;
        b[i]=so+a[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<n; i++)
    {
        q.push(b[i]);
        while(q.size()!=0&&a[i]>=q.top()) q.pop();
        
        if(maxx<q.size()) maxx=q.size();
        
    }
    cout<<maxx;
    return 0;
}