#include<bits/stdc++.h>
using namespace std;
string s;
int a[1000]={};
bool dd[1000]={};
void in()
{
    for(int i=0; i<s.length(); i++) cout<<s[a[i]];
    cout<<' ';
}
void Try(int i)
{
    for(int j=0; j<s.length(); j++)
    {
        if(!dd[j])
        {
            a[i]=j;
            dd[j]=1;
            if(i==s.length()-1) in();
            else Try(i+1);
            dd[j]=0;
        }
    }
}
void solve()
{
    cin>>s;
    Try(0);
}
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        solve();
        cout<<endl;
    }
}