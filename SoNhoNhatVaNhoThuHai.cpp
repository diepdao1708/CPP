#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int a[10000007];
void Run()
{
    int n; cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    int min1=a[0], min2=-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=min1)
        {
            min2=a[i];
            break;
        }
    }
    if(min2==-1) cout<<"-1";
    else cout<<min1<<' '<<min2;
    printf("\n");
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}