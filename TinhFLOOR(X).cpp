#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
long long n, x;

void Run()
{
    cin>>n>>x;
    long long res = -1;
    for(int i=0; i<n; i++) 
    {
        long long tmp; cin>>tmp;
        if(tmp<=x) res=i+1;
    }
    cout<<res;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}