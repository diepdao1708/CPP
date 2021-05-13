#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, s, m;
void Run()
{
    cin>>n>>s>>m;
    if(n<m) cout<<"-1";
    else
    {
        if(n==m) 
        {
            if(s<7) cout<<s;
            else cout<<"-1";
        }
        else
        {
            int k=s*m;
            int x;
            if(k%n==0) x=k/n;
            else x=k/n+1; 
            int y=x+x/7;
            if(y<=s) cout<<x;
            else cout<<"-1";
        }
        
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}