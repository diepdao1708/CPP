#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, a[10000], L[10000];
void Run()
{
    cin>>n;
    int Max=0;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        L[i]=1;
        for(int j=0; j<i; j++)
        {
            if(a[i]>a[j] && L[i]<L[j]+1) L[i]=L[j]+1;
            Max=max(Max, L[i]);
        }
    }
    cout<<Max<<endl;
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}