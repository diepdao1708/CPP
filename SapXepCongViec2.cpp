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
struct job
{
    int id, deadline, profit;
};
bool cmp(job a, job b)
{
    return (a.profit>b.profit);
}
void Run()
{
    cin>>n;
    vector<job> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i].id>>arr[i].deadline>>arr[i].profit;
    sort(arr.begin(), arr.end(), cmp);
    vector<bool> slot(1001, false);
    ll sum=0, ans=0;
    //for(int i=0; i<n; i++) cout<<arr[i].profit<<' '<<arr[i].deadline<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=min(n, arr[i].deadline)-1; j>=0; j--)
        {
            if(!slot[j])
            {
                //cout<<j<<' '<<arr[j].profit<<endl;
                sum+=arr[i].profit;
                ans++;
                slot[j]=true;
                break;
            }
        }
    }
    cout<<ans<<' '<<sum<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}