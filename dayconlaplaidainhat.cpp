#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void solve()
{
    cin>>n>>s;
    int l[101][101]={};
    for(int i=0; i<s.length(); i++) 
    {
        l[i][0]=0;
        l[0][i]=0;
    }
    int maxx=0;
    for(int i=1; i<=s.length(); i++)
    {
        for(int j=1; j<=s.length(); j++)
        {
            if(s[i-1]==s[j-1]&&i!=j) l[i][j]=l[i-1][j-1]+1;
            else l[i][j]=max(l[i][j-1], l[i-1][j]);
            if(l[i][j]>maxx) maxx=l[i][j];
        }
    }
    cout<<maxx<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}