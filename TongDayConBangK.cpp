#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, k;
vector<vector<int> > res;
vector<int> a, b;
void print()
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==1) sum+=b[i];
    }
    if(sum==k) res.push_back(a);
}
void BackTrack(int i)
{
    for(int j=0; j<=1; j++)
    {
        a[i]=j;
        if(i==n-1) print();
        else BackTrack(i+1);
    }
}
void Run()
{
    cin>>n>>k;
    a.resize(n, 0);
    b.resize(n, 0);
    for(int i=0; i<n; i++) cin>>b[i];
    BackTrack(0);
    for(int i=0; i<res.size(); i++) 
    {
        for(int j=0; j<res[i].size(); j++)
        {
            if(res[i][j]==1) cout<<b[j]<<' ';
        }
        cout<<endl;
        //cout<<res[i]<<endl;
    }
    cout<<res.size();
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}