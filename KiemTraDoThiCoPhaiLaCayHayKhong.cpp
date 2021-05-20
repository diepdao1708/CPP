#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int root[1001]={};
int n;
int findRoot(int u){
    if(root[u] == u) return u;
    return findRoot(root[u]);
}
void Run()
{
    cin>>n;
    for(int i=1; i<=n; i++) root[i] = i;
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        int root1 = findRoot(u);
        int root2 = findRoot(v);
        if(root1 != root2){
            if(u > v) root[u] = root[v];
            else root[v] = root[u];
        }
        else {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}