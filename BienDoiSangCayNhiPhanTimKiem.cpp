#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#define ll long long
using namespace std;
void Run()
{
    int n; cin>>n;
    set<int> a;
    for(int i=0; i<n; i++){
        int u, v; char c;
        cin>>u>>v>>c;
        a.insert(u);
        a.insert(v);
    }
    for(set<int>::iterator it=a.begin(); it!=a.end(); it++){
        cout<<*it<<' ';
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