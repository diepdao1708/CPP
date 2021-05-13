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
struct so{
    int id, thoigian, tienphat;
};
bool cmp(so a, so b)
{
    if (a.thoigian*b.tienphat < a.tienphat*b.thoigian) return 1;
    if (a.thoigian*b.tienphat == a.tienphat*b.thoigian) 
    {
        if(a.id < b.id) return 1;
    }
    return 0;
}
void Run()
{
    cin>>n;
    vector<so> res(n);
    for(int i=0; i<n; i++) cin>>res[i].tienphat;
    for(int i=0; i<n; i++) 
    {
        cin>>res[i].thoigian;
        res[i].id = i + 1;
    }
    sort(res.begin(), res.end(), cmp);
    ll ans=0;
    ll s=0;
    for(int i=0; i<n; i++)
    {
        s+=res[i].thoigian;
        ans+=res[i].tienphat*s;
    }
    cout<<ans<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<res[i].id<<' ';
    }
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}