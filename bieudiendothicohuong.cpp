#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<int> G[1000];
int V, E;
void Run()
{
    cin>>V>>E;
    for(int i=1; i<=V; i++) G[i].clear();
    for(int i=1; i<=E; i++)
    {
        int u, v;
        cin>>u>>v;
        G[u].push_back(v);
    }
    for(int i=1; i<=V; i++) sort(G[i].begin(), G[i].end());
    for(int i=1; i<=V; i++)
    {
        cout<<i<<": ";
        for(int j=0; j<G[i].size(); j++) cout<<G[i][j]<<' ';
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}