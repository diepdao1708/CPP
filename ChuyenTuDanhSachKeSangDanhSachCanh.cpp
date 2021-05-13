#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
bool dd[1000][1000];
vector<int> G[1000];
void Run()
{
    int n; cin>>n; cin.ignore();
    string s;
    for(int i=1; i<=n; i++)
    {
        getline(cin, s);
        s+=' ';
        int so=0;
        for(int j=0; j<s.length(); j++)
        {
            if(s[j]>='0' && s[j]<='9') so=so*10+(s[j]-'0');
            else 
            {
                if(so>0)
                {
                    G[i].push_back(so);
                    so=0;
                }
            }
        }
    }
    for(int i=1; i<=n; i++) 
    {
        sort(G[i].begin(), G[i].end());
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<G[i].size(); j++)
        {
            if(!dd[i][G[i][j]] && !dd[G[i][j]][i])
            {
                cout<<i<<' '<<G[i][j]<<'\n';
                dd[i][G[i][j]]=dd[G[i][j]][i]=1;
            }
        }
    }
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}