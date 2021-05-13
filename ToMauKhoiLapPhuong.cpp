#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
using namespace std;

ll xCy(ll m, ll k){
	if(m < k) return 0;
	ll tmp = 1;
	fori(i,m - k + 1, m + 1) tmp *= i;
	fori(i,1,k + 1) tmp /= i;
	return tmp;
}

int n, dem, x;

// 6 mat khac nhau
ll paint_6 (){
	if(n < 6) return 0;
	return xCy(n, 6) * 30;
}

//2 mat giong nhau
ll paint_5(){
	if(dem < 1 || n < 5) return 0;
	return dem * xCy (n - 1, 4) * 3;
}

// 4 mat giong nhau
ll paint_4(){
	if(dem < 2 || n < 4) return 0;
	return xCy(dem, 2) * xCy(n - 2, 2);
}

ll paint_3(){
	if(dem < 3) return 0;
	return xCy(dem,3);
}

void xl(){
	cin >> n; dem = 0;
	fori(i,0,n){
		cin >> x;
		if(x >= 2) dem ++;
	}
	cout << paint_3() + paint_4() + paint_5() + paint_6();
}

int main(){
	fastIO();
	int T;
	T = 1;
	//cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}