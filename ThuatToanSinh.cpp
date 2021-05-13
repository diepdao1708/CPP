#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n;
vector<string> res;
int a[100];
void print()
{
    string s="";
    for(int i=0; i<n; i++)
    {
        s+=(char)(a[i]+'0');
    }
    string b=s;
    reverse(b.begin(), b.end());
    if(b==s) res.push_back(s);
}
void BackTrack(int i)
{
    for(int j=0; j<=1; j++)
    {
        a[i]=j;
        if(i==n-1) print();
        else BackTrack(i+1);
    }
}
void Run()
{
    cin>>n;
    BackTrack(0);
    //cout<<res.size()<<endl;
    for(int i=0; i<res.size(); i++) 
    {
        for(int j=0; j<res[i].length(); j++) cout<<res[i][j]<<' ';
        cout<<endl;
        //cout<<res[i]<<endl;
    }
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}