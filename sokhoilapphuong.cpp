#include<bits/stdc++.h>
using namespace std;
vector<long long> f;
void pre()
{
    long long k=1;
    for(int i=1; i<=1e6; i++)
    {
        long long tmp=k*k*k;
        f.push_back(tmp);
        k++;
    }
}
long long n;
string so(long long n)
{
    string s="";
    while(n>0)
    {
        char tmp=n%10+'0';
        n=n/10;
        s=tmp+s;
    }
    return s;
}
bool ktr(long long n, long long m)
{
    string s=so(n);
    string s1=so(m);
    int k=0;
    for(int i=0; i<s1.length(); i++)
    {
        bool ok=0;
        for(int j=k; j<s.length(); j++)
        {
            if(s1[i]==s[j])
            {
                ok=1;
                k=j+1;
                break;
            }
        }
        if(ok==0) return 0;
    }
    return 1;
}
void solve()
{
    cin>>n;
    
    long long luu=-1;
    for(int i=f.size()-1; i>=0; i--)
    {
        if(f[i]==n)
        {
            luu=f[i];
            break;
        }
        if(f[i]<n)
        {
            if(ktr(n, f[i]))
            {
                luu=f[i];
                break;
            }
        }
    }
    cout<<luu;
    cout<<'\n';
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    pre();
    while(t--) solve();
    return 0;
}