#include<bits/stdc++.h>
using namespace std;
string s;
void solve()
{
    cin>>s;
    int n=s.length();
    vector<vector<bool> > L(n,vector<bool> (n));
    for(int i=0; i<n; i++) L[i][i]=1;
    int res=1;
    for(int k=1; k<n; k++)// độ dài xâu
    {
        for(int i=0; i<n-k; i++)
        {
            int j=i+k;
            L[i][j]=((i+1>j-1||L[i+1][j-1])&&s[i]==s[j]);
            if(L[i][j]) res=k+1;
        }
    }
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
//abccbghjkaaaaaaaaaakfwg