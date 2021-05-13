#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, k, a[100], X[100];
bool cauhinhcuoi=false;
bool ok=0;
void print()
{
    int sum=0;
    int vt=1;
    for(int i=1; i<=n; i++)
    {
        if(X[i]==0) 
        {
            sum+=a[i];
            vt=i;
        }
    }
    if(sum==k) 
    {
        ok=1;
        cout<<'[';
        for(int i=1; i<vt; i++)
        {
            if(X[i]==0) cout<<a[i]<<' '; 
        }
        cout<<a[vt];
        cout<<']'<<' ';
    }
}
void NP()
{
    int i=n;
    while(i>0&&X[i]==1) i--;
    if(i==0) cauhinhcuoi=true;
    X[i]=1;
    for(int j=i+1; j<=n; j++) X[j]=0;
}
void Run()
{
    cauhinhcuoi=false;
    ok=0;
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1);
    for(int i=1; i<=n; i++) X[i]=0;
    while(!cauhinhcuoi)
    {
        print();
        NP();
    }
    if(ok==0) cout<<-1;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}