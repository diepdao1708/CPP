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
vector<int> x;
vector<vector<int> > res;
int a[11][11];
bool cauhinhcuoi=false;
void check()
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=a[i][x[i]];
    }
    if(sum == k) res.push_back(x);
}
void sinh()
{
    int i = n-1;
    while(i>0 && x[i+1] < x[i]) i--;
    if(i==0)
    {
        cauhinhcuoi=true;
        return;
    }
    int k=n;
    while(x[k]<x[i]) k--;
    swap(x[i], x[k]);
    sort(x.begin()+i+1, x.end());
}
void Run()
{
    cin>>n>>k;
    x.resize(n+1, 0);
    for(int i=1; i<=n; i++) x[i]=i;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) cin>>a[i][j];
    }
    while(!cauhinhcuoi)
    {
        check();
        sinh();
    }
    cout<<res.size()<<endl;
    for(int i=0; i<res.size(); i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<res[i][j]<<' ';
        }
        cout<<endl;
    }
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}