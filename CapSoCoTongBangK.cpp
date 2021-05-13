
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, a[1000005], k;
void Run()
{
    cin>>n>>k;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
    }
    int dem=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]+a[j]==k) dem++;
        }
    }
    cout<<dem;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}