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
    cin>>n>>m>>k;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int j=0; j<m; j++) cin>>b[j];
    int x=0, y=0;
    int tmp;
    while(x<n && y<m)
    {
        if(a[x]<b[y])
        {
            tmp=a[x];
            k--;
            x++;
        }
        else
        {
            tmp=b[y];
            k--;
            y++;
        }
        if(k==0) 
        {
            cout<<tmp<<endl;
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