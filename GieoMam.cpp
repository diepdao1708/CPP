#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
using namespace std;

vector <vector <int> > a;
int n, m;
int X[] = {-1, 1, 0, 0};
int Y[] = {0, 0, 1, -1};

bool check (){
	int x, y;
	stack <pair <int, int> > st;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j] == 2){
                for(int h=0; h<4; h++){
                    x = i + X[h];
                    y = j + Y[h];
                    if(x < n && x >= 0 && y < m && y >= 0 && a[x][y] == 1) st.push(make_pair(x, y));
                }
            }
		}
	}
	if(st.empty()) return 0;
	pair <int, int> k;
	while(!st.empty())
	{
		k = st.top();
		a[k.F][k.S] = 2;
		st.pop();
	}
	return 1;
}

void xl (){
	cin >> n >> m;
	a.clear();
	a.resize(n);
	int k;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> k;
			a[i].push_back(k);
		}
	}
	ll ans = 0;
	while(check()){
		ans ++;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j] == 1) {
				cout << "-1";
				return;
			}
		}
	}
	cout << ans;
	


	a.clear();
}

int main(){
	int T; 
	//T = 1;
	cin >> T;
	//cin.ignore();
	while (T -- ){
		xl();
		cout << "\n";
	}
}