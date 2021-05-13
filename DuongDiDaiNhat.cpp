#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int N, E;
int a[21][21];
int maxx=0;
void Try(int u, int spt)
{
    if(spt>maxx) maxx=spt;
    for(int v=0; v<N; v++)
    {
        if(a[u][v]>0)
        {
            a[u][v]=-a[u][v];
            a[v][u]=-a[v][u];
            Try(v, spt+1);
            a[u][v]=-a[u][v];
            a[v][u]=-a[v][u];
        }
    }
}
void Run()
{
    maxx=0;
    cin>>N>>E;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++) a[i][j]=0;
    }
    for(int i=0; i<E; i++)
    {
        int u, v; cin>>u>>v;
        a[u][v]=1;
        a[v][u]=1;
    }
    for(int i=0; i<N; i++)
    {
        Try(i, 0);
    }
    cout<<maxx<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}