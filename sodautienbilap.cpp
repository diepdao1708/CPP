#include<bits/stdc++.h>
using namespace std;
int n;
int a[100001]={};
void solve()
{
    cin>>n;
    map<int, int> dd;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        dd[a[i]]++;
    }//for
    bool ok=0;
    for(int i=0; i<n; i++)
    {
        if(dd[a[i]]>1)
        {
            ok=1;
            cout<<a[i];
            break;
        }
    }//for
    if(ok==0) cout<<"NO";
    cout<<'\n';
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}