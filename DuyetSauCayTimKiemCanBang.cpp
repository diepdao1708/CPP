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
vector<int> a;

void build(int l, int r){
    if(l > r) {
        return;
    }
    int mid = (l+r) / 2;
    
    build(l, mid-1);
    //cout<<a[mid]<<' ';
    build(mid+1, r);
    cout<<a[mid]<<' ';
}

void Run()
{
    int n; cin>>n;
    a.clear(); a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    build(0, n-1);
    
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}
