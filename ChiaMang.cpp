#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, k, sum;
vector<int> a;
bool res=0;
void Try(int target, int spt)
{
    if(res==1) return;
    if(spt==k)
    {
        res=1;
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(target<sum) Try(target+a[i], spt);
        else if(target>sum) return;
        else Try(0, spt+1);
    }
}
void Run()
{
    res=0;
    cin>>n>>k;
    a.resize(n);
    int s=0;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        s+=a[i];
    }
    if(s%k!=0){
        cout<<"0"<<"\n";
        return;
    }
    sum=s/k;
    Try(0, 0);
    cout<<res<<'\n';

}
int main()
{
    ios_base::sync_with_stdio(false);
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}