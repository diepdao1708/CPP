#include<bits/stdc++.h>
using namespace std;
//int n;
vector<long long> f(51, 0);
void pre()
{
    f[1]=1;
    for(int i=2; i<=50; i++) f[i]=f[i-1]*2+1;
}
int kq(int n, long long vt)
{
    if(n==1) return 1;
    long long tmp=f[n-1];
    if(vt==tmp+1) return n;
    if(vt<=tmp) return kq(n-1, vt);
    if(vt>tmp+1) return kq(n-1, vt-tmp-1);
}
void solve()
{
    int n;
    scanf("%d", &n);
    long long k;
    scanf("%lld", &k);
    
    printf("%d\n",kq(n, k));
}
int main()
{
    int t;
    scanf("%d", &t);
    pre();
    while(t--) solve();
    return 0;
}