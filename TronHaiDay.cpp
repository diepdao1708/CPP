#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
long long n, m, a[1000001], b[1000001];
void Run()
{
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    sort(a, a+n);
    sort(b, b+m);
    long long x=0, y=0;
    while(x<n&&y<m)
    {
        if(a[x]<b[y]) cout<<a[x++]<<' ';
        else
        {
            if(a[x]>b[y]) cout<<b[y++]<<' ';
            else 
            {
                cout<<a[x++]<<' '<<b[y++]<<' ';
            }
        }
    }
    while(x<n) cout<<a[x++]<<' ';
    while(y<m) cout<<b[y++]<<' ';
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}