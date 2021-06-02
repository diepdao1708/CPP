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
 
int n;
int a[] = {2, 3, 5, 7, 9, 11, 13, 17, 19, 23, 29, 31};
ll res;
 
void Try(int i, ll ans, ll dem){
	if(dem > n) return;
	if(dem == n){
		res = min(res, ans);
	}
	for(int j = 1; ; j ++){
		if(ans * a[i] > res) return;
		ans *= a[i];
		Try(i + 1, ans, dem *(j + 1));
	}
}
 
void xl (){
	cin >> n; res = 1e18 + 5;
	Try(0, 1, 1);
	cout << res;
 
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