#include<bits/stdc++.h>
using namespace std;
string s;
int L[1001][1001]={};
void solve()
{
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        for(int j=0; j<s.length(); j++)
        {
            if(i==j) L[i][j]=1;
            else L[i][j]=0;
        }
    }
    for(int i=s.length()-2; i>=0; i--)
    {
        for(int j=i+1; j<s.length(); j++)
        {
            if(s[i]==s[j]) L[i][j]=L[i+1][j-1]+2;
            else L[i][j]=max(L[i+1][j], L[i][j-1]);
        }
    }
    cout<<L[0][s.length()-1]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
//abccbghjkaaaaaaaaaakfwg