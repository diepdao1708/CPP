#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, m;
long long a[1000001], b[1000001];
void Run()
{
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int j=0; j<m; j++) cin>>b[j];
    sort(a, a+n);
    sort(b, b+m);
    cout<<a[n-1]*b[0]<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}