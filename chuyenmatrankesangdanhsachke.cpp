#include<bits/stdc++.h>
using namespace std;
void Run()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int a;
            cin>>a;
            if(a==1) cout<<j+1<<' ';
        }
        cout<<'\n';
    }
}
int main()
{
    int T=1;
 //   cin>>T;
    while(T--) Run();
    return 0;
}