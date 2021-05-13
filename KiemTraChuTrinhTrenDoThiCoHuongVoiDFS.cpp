#include<bits/stdc++.h>
using namespace std;
int V, E;
vector<vector<int> > G;
vector<int> dd;
bool ok=0;
void DFS(int u)
{
    dd[u]=1;
    for(int v:G[u])
    {
        if(dd[v]==0) DFS(v);
        else if(dd[v]==1) ok=true;
        //nếu gặp 1 đỉnh v đã được thăm trong quá trình duyệt cây dfs gốc u, 
        //thì đồ thị có chu trình (chu trình này nằm trong cây dfs gốc u)
    }
    dd[u]=2;//kết thúc quá trình duyệt cây dfs gốc u, 
            //tất cả các đỉnh con trong cây này đều được cập nhập dd=2
}
void Reset()
{
    ok=0;
    G.clear();
    dd.clear();
    G.resize(V+1);
    dd.resize(V+1, 0);
}
void Run()
{
    cin>>V>>E;
    Reset();
    for(int i=0; i<E; i++) 
    {
        int a, b;
        cin>>a>>b;
        G[a].push_back(b);
    }
    for(int i=1;i<=V;i++)
        if (dd[i]==0) DFS(i);
    if(ok==0) cout<<"NO";
    else cout<<"YES";
    cout<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}