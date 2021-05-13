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
    int x; 
    cin>>x;
    string s; 
    cin>>s;  
    int k;
    int a[10006]={};
    int n=s.length();
    if(n%x==0) k=n/x;
    else k=n/x+1;
    for(int i=0; i<n; i++)
    {
        if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
    }
    for(int i=0; i<s.length(); i++) 
    {
        a[s[i]]++;
    }

    for(int i='a'; i<='z'; i++)
    {
        if(a[i]>k)
        {
            cout<<"-1"<<endl;
            return;
        }
    }
    cout<<"1"<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}