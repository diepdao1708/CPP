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
    int n; cin>>n;
    int x7=n/7;
    int x4=0;
    while(x7>=0)
    {
        if((n-x7*7) % 4==0)
        {
            x4=(n-x7*7)/4;
            break;
        }
        x7--;
    }
    if(x7<0) cout<<"-1"<<"\n";
    else
    {
        for(int i=0; i<x4; i++) cout<<"4";
        for(int i=0; i<x7; i++) cout<<"7";
        cout<<"\n";
    }
    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}