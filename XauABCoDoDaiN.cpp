#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, a[1000];
bool cauhinhcuoi=false;
void print()
{
    for(int i=1; i<=n; i++)
    {
        if(a[i]==0) cout<<'A';
        else cout<<'B';
    }
    cout<<' ';
}
void sinh()
{
    int i=n;
    while(i>=1&&a[i]==1) i--;
    if(i==0) cauhinhcuoi=true;
    a[i]=1;
    for(int j=i+1; j<=n; j++) a[j]=0;
}
void Run()
{
    cin>>n;
    cauhinhcuoi=false;
    for(int i=1; i<=n; i++) a[i]=0;
    while(!cauhinhcuoi)
    {
        print();
        sinh();
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