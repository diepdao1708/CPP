#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
string BDM(int n)
{
    queue<string> q;
    q.push("1");
    while(!q.empty())
    {
        string res = q.front(); q.pop();
        long long tmp = 0;
        for(int i=0; i<res.length(); i++)
        {
            tmp = tmp*10 + (res[i] - '0');
            tmp %= n;
        }
        if(tmp == 0) return res;
        q.push(res + "0");
        q.push(res + "1");
    }
    
}
void Run()
{
    int n; cin>>n;
    cout<<BDM(n)<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}