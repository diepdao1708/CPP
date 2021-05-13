
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, m, k, a[1000005], b[1000005];
void Run()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int j=0; j<n-1; j++) cin>>b[j];
    b[n-1]=-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            cout<<i+1<<endl;
            return;
        }
    }
    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}