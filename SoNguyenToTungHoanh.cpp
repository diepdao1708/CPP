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

vector <int> ktra, ans;
int vt;

void sang (){
    ktra.resize(oo, 0);
    for(ll i = 2; i * i< oo; i ++) {
        if(ktra[i] == 1) continue; 
        for(ll j = i * i; j < oo; j += i){
            ktra[j] = 1;
        }
    }
    vt = 2;
    forr(i, oo, 2){
        if(ktra[i] == 0){
            vt = i; 
            break;
        }
    }
    forr(i, vt, 2 ){
        if(ktra[i] == 0){
            //cout << i << " " << vt;
            ktra[i] = vt;
            vt = i;
        }
    }

}

int n;
string s;
vector <int> mahoa;

void xl (){
    cin >> n >> s;
    if(ktra[n] == 1 ){
        fori(i, n, oo){
            if(ktra[i] != 1){
                n = i;
                break;
            }
        }
    }
    mahoa.clear();
    vt = 26;
    while(vt --){
        mahoa.pb(n);
        n = ktra[n];
    }
    fori(i, 0, s.size()){
        cout << mahoa[s[i] - 'a'] << " ";
    }
    
}

int main(){
    fastIO();
    sang();
    int T; 
    //T = 1;
    cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        cout << "\n";
    }
}