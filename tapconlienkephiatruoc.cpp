#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[1001]={};
void slove()
{
    cin>>n>>k;
    for(int i=1; i<=k; i++) cin>>a[i];
    bool ok=1;
    for(int i=1; i<=k; i++) 
    {
        if(a[i]!=i)
        {
            ok=0;
            break;
        }
    }
    if(ok==1) for(int i=1; i<=k; i++) cout<<n-k+i<<' ';
    else
    {
        bool ok1=1;
        for(int i=k; i>1; i--)
        {
            if(a[i]-a[i-1]>1) 
            {
                ok1=0;
                a[i]--;
                for(int j=i+1; j<=k; j++) a[j]=n-k+j;
                break;
            }
        }
        if(ok1==1) 
        {
            a[1]--;
            for(int i=k; i>1; i--) a[i]=n-k+i;
        }
        for(int i=1; i<=k; i++) cout<<a[i]<<' ';
    }

    
    cout<<'\n';
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) slove();
    return 0;
}