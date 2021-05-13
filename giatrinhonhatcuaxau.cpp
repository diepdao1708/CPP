#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
const ll mod=1e9+7;
string s;
int n;
void Run()
{
    cin>>n;
    cin>>s;
    int ts[10000]={};
    for(int i=0; i<s.length(); i++) ts[s[i]]++;
    priority_queue<ll> q;
    for(int i=0; i<s.length(); i++)
    {
        if(ts[s[i]]) 
        {
            q.push(ts[s[i]]);
            ts[s[i]]=0;
        }
    }
    while(n>0)
    {
        int tmp=q.top();
        q.pop();
        tmp--;
        n--;
        q.push(tmp);

    }
    long long sum=0;
    while(q.size())
    {
        sum+=(q.top()*q.top());
        q.pop();
    }
    cout<<sum<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}