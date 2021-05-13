
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, a[1000006], ts[1000006];
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second>b.second) return 1;
    else
    {
        if(a.second==b.second)
        {
            if(a.first<b.first) return 1;
        }
    }
    return 0;
}
void Run()
{
    vector<pair<int, int> > p;
    for(int i=0; i<=1000000; i++) ts[i]=0;
    cin>>n;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        ts[a[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        p.push_back(make_pair(a[i], ts[a[i]]));
    }
    sort(p.begin(), p.end(), cmp);
    for(int i=0; i<p.size(); i++)
    {
        cout<<p[i].first<<' ';
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}