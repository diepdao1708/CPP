#include<bits/stdc++.h>

using namespace std;
vector<int> res;
vector<int> a;
bool check(){
    for(int i = 1; i < res.size(); i++)
    {
        if (res[i] < res[i-1]) return 0;
    }
    return 1;
}

void sinhth (int n, int k, int spt){
    if (res.size() == k) {
        if (check())
        {
            for(int i = 0; i < res.size(); i++) cout << res[i]<<' ';
            cout <<endl;
        }
        return;
    }
    if (spt == n) return;
    for(int i = spt; i < n; i++)
    {
        res.push_back(a[i]);
        sinhth(n, k, i+1);
        res.pop_back();
    }
}
void solve(){
    int n, k;
    cin >> n >> k;
    a.clear();
    a.resize(n);
    for(int i = 0;i < n; i++) cin >> a[i];
    sinhth(n, k, 0);
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}