#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
void Run()
{
    ll a, b, c;
    cin>>a>>b>>c;
    ll sum=a+b+c;
    ll maxx=a;
    if(maxx<b) maxx=b;
    if(maxx<c) maxx=c;
    if(maxx/2 >= (sum-maxx)) cout<<sum-maxx;
    else cout<<sum/3;
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}