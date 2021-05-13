#include<bits/stdc++.h>
using namespace std;
string s;
bool ktr(string s, string hoanvi)
{
    for(int i=0; i<hoanvi.length()-1; i++)
    {
        if(s[i]=='I'&&hoanvi[i]>hoanvi[i+1]) return 0;
        if(s[i]=='D'&&hoanvi[i]<hoanvi[i+1]) return 0;
    }
    return 1;
}
void solve()
{
    cin>>s;
    string hoanvi="";
    for(int i=1; i<=s.length()+1; i++)
    {
        hoanvi=hoanvi+char(i+'0');
    }
    do
    {
        if(ktr(s, hoanvi)) 
        {
            cout<<hoanvi<<'\n';
            break;
        }
    } while (next_permutation(hoanvi.begin(), hoanvi.end()));
    
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