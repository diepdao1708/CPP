#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
#define ll long long
using namespace std;
const int oo = 1e9;
void Run()
{
    double n, d; 
    cin>>n>>d;
    vector<pair<double, double> > a(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first>>a[i].second;
    }
    ll maxx = 0;
    pair<double, double> vt;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            pair<double, double> ans;
            ans.first = (a[j].first + a[i].first) / 2;
            ans.second = (a[j].second + a[i].second) / 2;
            ll res = 0;
            for(int z=0; z<n; z++){
                double k = (ans.first - a[z].first) * (ans.first - a[z].first) + (ans.second - a[z].second) * (ans.second - a[z].second);
                if(k * 4 <= d * d){
                    res++;
                } 
            }
            if(res > maxx){
                maxx = res;
                vt = ans;
            }
        }
        
    }
    cout<<maxx<<endl;
    for(int z=0; z<n; z++){
        double k = (vt.first - a[z].first) * (vt.first - a[z].first) + (vt.second - a[z].second) * (vt.second - a[z].second);
        if(k * 4 <= d * d){
            cout<<z+1<<' ';
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