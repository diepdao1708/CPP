// #include<bits/stdc++.h>
// using namespace std;
// int DT[1000][1000]={}; // ma trận kề
// int main()
// {
//     ios::sync_with_stdio(false); 
//     cin.tie(0);
//     cout.tie(0);
//     int V,E;
//     cin>>V>>E;
//     for(int i=0; i<E; i++)
//     {
//         int u,v;
//         cin>>u>>v;
//         DT[u][v]=1;
//     }
//     int q;
//     cin>>q;
//     int u=q;
//     for(int v=1; v<=V; v++)
//     {
//         if(DT[u][v]==1)
//         {
//             cout<<' '<<v;
//         }
//     }
//     return 0;
// }
//--------------------------------------------------
// danh sach canh
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> Anh, Em;
// // V dinh -> anh
// // E canh -> em
// int main()
// {
//     ios::sync_with_stdio(false); 
//     cin.tie(0);
//     cout.tie(0);
//     int E,V;
//     cin>>E>>V;
//     for(int i=0; i<E; i++)
//     {
//         int u,v;
//         cin>>u>>v;
//         Anh.push_back(u);
//         Em.push_back(v);
//     }
//     int u;
//     cin>>u;
//     for(int i=0; i<E; i++)
//     {
//         int u_1=Anh[i];
//         int v_1=Em[i];
//         if(u_1==u) 
//         {
//             cout<<' '<<v_1;
//         }
//     }
//     return 0;
// }
//--------------------------------------
// danh sach ke
#include<bits/stdc++.h>
using namespace std;
vector<int> DoThiKe[10001];
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int V,E;
    cin>>V>>E;
    for(int i=0; i<E; i++)
    {
        int u,v;
        cin>>u>>v;
        DoThiKe[u].push_back(v);
    }
    int u;
    cin>>u;
    for(int i=0; i<DoThiKe[u].size(); i++)
    {
        int v=DoThiKe[u][i];
        cout<<' '<<v;
    }
    return 0;
}