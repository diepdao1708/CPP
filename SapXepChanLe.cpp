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
    vector<ll> chan;
    vector<ll> le;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(i%2==0) le.push_back(x);
        else chan.push_back(x);
    }
    sort(chan.begin(), chan.end());
    sort(le.begin(), le.end());
    int ii=0, jj=chan.size()-1;
    while(ii<le.size() && jj >= 0){
        cout<<le[ii]<<' ';
        cout<<chan[jj]<<' ';
        ii++; jj--;
    }
    if(n%2==1) cout<<le[le.size()-1];
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}