#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<ll> a;
ll n;
void Run()
{
    cin>>n;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    stack<ll> st;
    vector<ll> res;
    res.push_back(-1);
    st.push(a[n-1]);
    for(int i=n-2; i>=0; i--){
        while(!st.empty() && st.top() <= a[i]){
            st.pop();
        }
        if(st.empty()) res.push_back(-1);
        else res.push_back(st.top());
        st.push(a[i]);
    }
    for(int i=res.size()-1; i>=0; i--) cout<<res[i]<<' ';
    cout<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}