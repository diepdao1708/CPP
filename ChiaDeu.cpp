#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
#define ll long long
using namespace std;
const int oo = 1e9;
int n, k, res = 0, tong;
int sum[20]={}, sl[20]={};
void chiadeu(int gr, int vt)
{
    if (gr > k) 
    {
        if (vt == n) res++;   
        return;
    }
    for(int i = vt+1; i <= n; i++)
    {
        if (sum[i] - sum[vt] == tong)
        {
            chiadeu(gr+1, i);
        } 
    }
}
void Run()
{
    cin >>n >> k;
    for(int i = 1; i <= n; i++)
    {
        int so;
        cin >> so;
        sum[i] = sum[i-1]+so;
    }
    if (sum[n] % k != 0) 
    {
        cout << 0;
        return;
    }
    tong = sum[n]/k;
    chiadeu(1, 0);
    cout << res;
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}