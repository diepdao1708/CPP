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

vector <int> check;
vector <int> a;
int n, b, ans;

void xl (){
    cin >> n; a.clear(); check.clear();
    a.resize(n);
    ans  = 0;
    check.resize(n + 1);
    fori(i, 0, n) {
        cin >> a[i];
        check[a[i]] = i;
    }
    int vt = 0;
    fori(i, 0, n){
        cin >> b;
        while(check[a[vt]] == -1 && vt < n) vt ++;
        if(b != a[vt]) {
            //cout << b << " " << vt << "\n";
            ans ++;
        }
        check[b] = -1;
    }
    cout << ans;
    
    
}

int main(){
    fastIO();
    int T; 
    T = 1;
    //cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        cout << "\n";
    }
}