#include<bits/stdc++.h>
using namespace std;
string s;
long long so(string s1)
{
    long long kq=0;
    for(int i=0; i<s1.length(); i++) 
    {
        kq=kq*10+s1[i]-'0';
    }
    return kq;
}
void solve()
{
    cin>>s;
    string a="";
    long long res=0;
    for(int i=0; i<s.length(); i++)
    {
        a=a+s[i];
        res+=so(a);
        for(int j=i+1; j<s.length(); j++)
        {
            a=a+s[j];
            res+=so(a);
        }
        a="";
    }
    cout<<res;
    cout<<'\n';
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}