#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<vector<string> > res;

void pre()
{
    vector<string> tmp;
    tmp.push_back("0");
    tmp.push_back("1");
    res.push_back(tmp);
    for(int i=0; i<9; i++)
    {
        tmp.clear();
        for(int j=0; j<res[i].size(); j++)
        {
            tmp.push_back('0' + res[i][j]);
        }
        for(int j=res[i].size()-1; j>=0; j--)
        {
            tmp.push_back('1' + res[i][j]);
        }
        res.push_back(tmp);
    }
    // 0 1
    // 00 01 11 10
}
void Run()
{
    int n; cin>>n;
    for(int i=0; i<res[n-1].size(); i++)
    {
        cout<<res[n-1][i]<<' ';
    }
    cout<<endl;
}
int main()
{
    pre();
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}