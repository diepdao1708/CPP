#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

int n, k, vt, x, dd;
ll ans, nho;
vector <ll> cd;

void xl (){
    cin >> n >> k; ans = 0;
    cd.resize(n);
    dd = -1;
    vt = -1;
    fori(i, 0, n){
        cin >> x;
        if(x > k) dd = i;
        else if(x == k){
            nho = i - dd;
            ans += nho;
            vt = i;
            //cout << "in the.." << x << " ";
            //cout << dd << " " << i;
            //cout << ans << " " << nho << " \n";
        }
        else {
            if(dd >= vt) continue;
            else ans += nho;
            //cout << ans << " **\n";
        }
    }
    cout << ans;
}

int main(){
    fastIO();
    int T; 
    //T = 1;
    cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        cout << "\n";
    }
}