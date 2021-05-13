#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, a[1005];
void Run()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    int res=1e9, maxx=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(res>abs(a[i]+a[j]))
            {
                maxx=a[i]+a[j];
                res=abs(a[i]+a[j]);
            }
        }
    }
    cout<<maxx;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}