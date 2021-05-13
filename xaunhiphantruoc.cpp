#include<bits/stdc++.h>
using namespace std;
string s;
void slove()
{
    cin>>s;
    bool ok=1;
    for(int i=s.length()-1; i>=0; i--)
    {
        if(s[i]=='1') 
        {
            ok=0;
            s[i]='0';
            for(int j=i+1; j<s.length(); j++) s[j]='1';
            break;
        }
    }
    if(ok==0) cout<<s;
    else for(int i=0; i<s.length(); i++) cout<<'1';
    cout<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--) slove();
    return 0;
}