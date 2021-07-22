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
bool cmp(pair<int,int> a, pair<int,int> b)
{
    return (a.first < b.first) || (a.first == b.first && a.second < b. second);
}
void Run()
{
    int n; cin>>n;
    vector<pair<int, int> > a(n);
    for(int i=0; i<n; i++) cin>>a[i].first>>a[i].second;
    int L[105]={};
    int kq = 0;
    sort(a.begin(), a.end(), cmp);
    for(int i=0; i<n; i++)
    {
        L[i]=1;
        for(int j=0; j<i; j++)
        {
            if(a[i].first > a[j].second && L[i] < L[j] + 1) L[i] = L[j] + 1;
            kq = max(kq, L[i]);
        }
    }
    cout<<kq<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}