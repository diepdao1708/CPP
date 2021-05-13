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
long long n, m, a[101], b[101];
map<ll,ll> tanso;
void Run()
{
    map<ll,ll> tanso;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        ll so; cin>>so;
        for(int j=2; j<=sqrt(so); j++)
        {
            while(so%j==0)
            {
                tanso[j]++;
                so/=j;
            }
        }
        if(so>1) tanso[so]++;
    }
    vector<int> res;
    for(int i=1; i<=m; i++)
    {
        bool check=1;
        bool ok=1;
        map<ll,ll> tansotmp = tanso;
        for(int j=0; j<n; j++)
        {
            ll so; cin>>so;
            for(int k=2; k<=sqrt(so); k++)
            {
                while(so%k==0)
                {
                    if(tansotmp[k]==0)
                    {
                        check=0;
                        break;
                    }
                    tansotmp[k]--;
                    so/=k;
                }
            }
            if(so>1)
            {
                if(tansotmp[so]==0) check=0;
                else tansotmp[so]--;
            }
        }
        if(check==1) res.push_back(i);
    }
    cout<<res.size()<<endl;
    for(int i=0; i<res.size(); i++) cout<<res[i]<<' ';
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}