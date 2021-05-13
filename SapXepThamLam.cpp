#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, a[1000], cop[1000];
void Run()
{
    cin>>n;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        cop[i]=a[i];
    }
    sort(a, a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]!=cop[i]&&a[n-1-i]!=cop[i])
        {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes";
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}