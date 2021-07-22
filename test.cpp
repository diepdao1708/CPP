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
int n;
bool check(int n){
    if((n%2==0 && n/2==1) || (n%3==0 && n/3==1) || (n-1 == 1)) return 1;
    return 0;
}
int BFS(){
    queue<pair<int, int> > q;
    q.push(make_pair(n, 0));
    while(!q.empty()){
        int u = q.front().first;
        int way = q.front().second;
        q.pop();
        if(check(u)) return way+1;
        if(u%3 == 0) q.push(make_pair(u/3, way+1));
        if(u%2 == 0) q.push(make_pair(u/2, way+1));
        q.push(make_pair(u-1, way+1));
    }
}
void Run()
{
    cin>>n;
    cout<<BFS()<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}