#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;

int n, k, a[1000006];
void Run()
{  
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        if(a[i]==k)
        {
            cout<<i<<endl;
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