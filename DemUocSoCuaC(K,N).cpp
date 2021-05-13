#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
void Run()
{
    int n, k; 
    while(cin>>n>>k)
    {
        int tanso[432]={};
        for(int i=1; i<=n; i++)
        {
            int x=i;
            for(int j=2; j<=sqrt(x); j++)
            {
                while(x%j==0)
                {
                    tanso[j]++;
                    x/=j;
                }
            }
            if(x>1) tanso[x]++;
        }
        for(int i=1; i<=k; i++)
        {
            int x=i;
            for(int j=2; j<=sqrt(x); j++)
            {
                while(x%j==0)
                {
                    tanso[j]--;
                    x/=j;
                }
            }
            if(x>1) tanso[x]--;
        }
        for(int i=1; i<=(n-k); i++)
        {
            int x=i;
            for(int j=2; j<=sqrt(x); j++)
            {
                while(x%j==0)
                {
                    tanso[j]--;
                    x/=j;
                }
            }
            if(x>1) tanso[x]--;
        }
        long long tmp=1;
        for(int i=1; i<=n; i++)
        {
            if(tanso[i]>0) 
            {
                tmp*=(tanso[i]+1);
            }
        }
        cout<<tmp<<endl;
    }
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}