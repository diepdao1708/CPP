#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int const oo = 1e9;
int a[101][5005]={};
int n, m;
void Run()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j) a[i][j] = 0;
            else a[i][j] = oo;
        }
    }
    for(int i=1; i<=m; i++){
        int u, v, c;
        cin>>u>>v>>c;
        a[u][v]=c;
        a[v][u]=c;
    }
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(a[i][j] > a[i][k] + a[j][k]){
                    a[i][j] = a[i][k] + a[j][k];
                }
            }
        }
    }
    int q; cin>>q;
    while(q--){
        int u, v;
        cin>>u>>v;
        cout<<a[u][v]<<endl;
        
    }

}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}