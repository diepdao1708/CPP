#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    int dem=0;
    int a[4]={};
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='1'&&s[i]<='9') 
        {
            a[dem]=s[i]-'0';
            dem++;
        }
    }//for
    if(a[0]+a[1]==a[2]) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
}// solve
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    cin.ignore();
    while(t--) solve();
    return 0;
}