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
    for(int i=1; i<=k; i++) cout<<a[i];
    cout<<' ';
}
void khoitao()
{
    for(int i=1; i<=k; i++) a[i]=i;
}
void Run()
{
    cin>>n>>k;
    khoitao();
    while(1)
    {
        in();
        int i=k;
        while(a[i]==n-k+i) i--;
        if(i<1) break;
        a[i]++;
        for(int j=i+1; j<=k; j++)
        {
            a[j]=a[j-1]+1;
        }
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