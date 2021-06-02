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
const int mod = 1e9 + 7;
vector<vector<ll> > f(10, vector<ll> (101, 0));
vector<ll> res;
void pre(){
    for(int i=0; i<=9; i++){
        f[i][1] = 1;
    };
    for(int i=2; i<=100; i++){
        f[0][i] = 0;
    }
    for(int i=1; i<=9; i++){
        for(int j=2; j<=100; j++){
            f[i][j] = f[i-1][j] + f[i][j-1];
        }
    }
    for(int i=1; i<=100; i++){
        ll x = 0;
        for(int j=0; j<=9; j++){
            x += f[j][i];
        }
        x = x % mod;
        res.push_back(x);
    }
    for(int i=1; i<100; i++) res[i]= (res[i] + res[i-1]) % mod;
}
void Run()
{
    int n; cin>>n;
   
    cout<< res[n-1] <<endl;
}
int main()
{
    pre();
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}