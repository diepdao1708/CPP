#include<bits/stdc++.h>
using namespace std;
long long nn(long long a)
{
    long long so=0;
    vector<int> f;
    while(a>0)
    {
        int n=a%10;
        a=a/10;
        if(n==5) n=6;
        f.push_back(n);
    }
    for(int i=f.size()-1; i>=0; i--) so=so*10+f[i];
    return so;
}
long long ln(long long a)
{
    long long so=0;
    vector<int> f;
    while(a>0)
    {
        int n=a%10;
        a=a/10;
        if(n==6) n=5;
        f.push_back(n);
    }
    for(int i=f.size()-1; i>=0; i--) so=so*10+f[i];
    return so;
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    long long a, b;
    cin>>a>>b;
    long long a1=nn(a);
    long long b1=nn(b);
    long long s=a1+b1;
    long long a2=ln(a);
    long long b2=ln(b);
    long long s1=a2+b2;
    if(s<s1) cout<<s<<' '<<s1;
    else cout<<s1<<' '<<s;
    return 0;
}