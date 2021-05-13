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
    string s; cin>>s;
    if(s[0] == '0')
    {
        cout<<0<<endl;
        return;
    }
    int n = s.length();
    int res[n+1]={};
    res[0] = 1;
    res[1] = 1;
    for(int i=2; i<=n; i++)
    {
        res[i]=0;
        if(s[i-1] > '0') res[i]=res[i-1];
        if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7'))
            res[i] += res[i-2];
    }
    cout<<res[n]<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}