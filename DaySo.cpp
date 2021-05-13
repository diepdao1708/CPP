#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n;
vector<int> a;
void Run()
{
    cin>>n;
    a.resize(n);
    int minn=1e9;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        minn=min(minn, a[i]);
    }
    //cout<<minn<<endl;
    int res=0;
    bool ok=1;
    for(int i=minn; i>=1; i--)
    {
        ok=1;
        for(int j=0; j<a.size(); j++)
        {
            int b=a[j]/i;
            if(a[j]/b == i)
            {
                while(b != 0 && a[j]/b == i)
                {
                    b--;
                }
                res+=(b+1);
            }
            else 
            {
                ok=0;
                res=0;
                break;
            }
        }
        if(ok==1) break;
        
        //cout<<ok<<endl;
    }
    cout<<res;
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}