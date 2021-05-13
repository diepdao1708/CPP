#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int v, e;
vector<int> G;
void Run()
{
    cin>>v>>e;
    G.clear(); G.resize(v+1);
    for(int i=0; i<e; i++)
    {
        int u, v;
        cin>>u>>v;
        G[u]++;
        G[v]--;
    }
    for(int i=1; i<=v; i++)
    {
        if(G[i]!=0) 
        {
            cout<<0<<'\n';
            return;
        }
    }
    cout<<1<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}