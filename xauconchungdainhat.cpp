#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int L[1001][1001]={};
string a, b;
void Run()
{
    cin>>a>>b;
    for(int i=0; i<a.length(); i++) L[i][0]=0;
    for(int i=0; i<b.length(); i++) L[0][i]=0;
    int Max=0;
    for(int i=1; i<=a.length(); i++)
    {
        for(int j=1; j<=b.length(); j++)
        {
            if(a[i-1]==b[j-1])
            {
                L[i][j]=L[i-1][j-1]+1;
            }
            else L[i][j]=max(L[i-1][j], L[i][j-1]);
            Max=max(Max, L[i][j]);
        }
    }
    cout<<Max<<endl;
}
int main()
{
    int T=1;
    cin>>T; 
    while(T--) Run();
    return 0;
}