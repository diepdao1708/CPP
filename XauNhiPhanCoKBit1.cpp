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
int a[20]={};
void in()
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==1) sum++;
    }
    if(sum==k)
    {
        for(int i=0; i<n; i++) cout<<a[i];
        cout<<endl;
    }
}
void Run()
{
    cin>>n>>k;
    for(int i=0; i<n; i++) a[i]=0;
    while(1)
    {
        in();
        int i=n-1;
        while(i>=0&&a[i]==1) i--;
        if(i<0) break;
        a[i]=1;
        for(int j=i+1; j<n; j++) a[j]=0;
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