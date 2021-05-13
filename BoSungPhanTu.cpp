#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, a[1000006];
void Run()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    int dem=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]>a[i-1]) dem+=(a[i]-a[i-1]-1);
    }
    cout<<dem<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}