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
int a[1000000];
void Run()
{
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    int maxx = 0, tmp = 0;
    for(int i=1; i<=n; i++)
    {
        if(tmp > maxx)
        {
            maxx = tmp;
        }
        tmp += a[i];
        if(tmp < 0)
        {
            tmp = 0;
        }
    }
    if(tmp > maxx) 
    {
        maxx = tmp;
    }

    cout<<maxx<<endl;
    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}