#include<bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
vector<pair<int, int> > f;
void Run()
{
    a.clear();
    cin>>n>>k;
    a.resize(n);
    f.clear();
    f.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        f[i].first=abs(k-a[i]);
        f[i].second=i;
    }
    sort(f.begin(), f.end());
    for(int i=0; i<n; i++) cout<<a[f[i].second]<<' ';
    cout<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
} 