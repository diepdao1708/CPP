#include<bits/stdc++.h>
using namespace std;
string s;
bool check(string s)
{
    for(int i=0; i<s.length(); i++) if(s[i]=='0') return 0;
    return 1;
}
void solve()
{
    cin>>s;
    if(check(s))
    {
        for(int i=0; i<s.length(); i++) cout<<'0';
    }
    else
    {
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i]=='0')
            {
                s[i]='1';
                for(int j=i+1; j<s.length(); j++)
                {
                    s[j]='0';
                }
                break;
            }
        }
        cout<<s;
    }
    cout<<'\n';
}
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