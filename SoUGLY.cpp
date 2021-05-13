#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#define ll long long
using namespace std;
vector<long long> ugly;
map<long long, bool> dd;
int n;

void pre()
{
    priority_queue<long long, vector<long long>, greater<long long> > q;
    q.push(1);
    for(int i=2; i<=10000; i++)
    {
        long long front = q.top();
        q.pop();
        if(dd[front]==1) continue;
        ugly.push_back(front);
        dd[front]=1;
        q.push(front * 2);
        q.push(front * 3);
        q.push(front * 5);
    }
    //for(int i=0; i<10; i++) cout<<ugly[i]<<' ';
}
void Run()
{
    cin>>n;
    cout<<ugly[n-1]<<endl;
}
int main()
{
    pre();
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
} 