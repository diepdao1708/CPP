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
int a[20]={};
void in()
{
    for(int i=1; i<=n; i++) cout<<a[i];
    cout<<' ';
}
void khoitao()
{
    for(int i=1; i<=n; i++) a[i]=i;
}
void Run()
{
    cin>>n;
    khoitao();
    while(1)
    {
        in();
        int i=n-1;
        while(a[i+1]<a[i]) i--;
        if(i<1) break;
        int k=n;
        while(a[i]>a[k]) k--;
        swap(a[i], a[k]);
        sort(a+i+1, a+n+1);
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