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
vector<int> a, root;
int dem = 0;
void build(int l, int r, int node){
    if(l > r) {
        return;
    }
    int mid = (l+r) / 2;
    root[node] = a[mid];
    build(l, mid-1, node*2);
    build(mid+1, r, node*2+1);
}
void countLa(int node)
{
    if (root[node] == -1) return;
    if (root[node*2] == -1 && root[node*2+1] == -1) dem++;
    countLa(node*2);
    countLa(node*2+1);
}
void Run()
{
    int n; cin>>n;
    a.clear(); a.resize(n);
    root.clear(); root.resize(4*n+5, -1);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    build(0, n-1, 1);
    dem = 0;
    countLa(1);
    cout<<dem;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}