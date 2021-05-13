#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, k, a[1005], ts[1005];
void Run()
{
    cin>>n>>k;
    for(int i=0; i<=1000; i++) ts[i]=0;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        ts[a[i]]++;
    }
    if(ts[k]==0) cout<<"-1";
    else cout<<ts[k];
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}