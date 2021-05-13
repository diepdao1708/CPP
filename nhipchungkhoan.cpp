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
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    stack<int> st;
    vector<int> L(n);
    st.push(-1);
    for(int i=0; i<n; i++){
        while(st.size() > 1 && a[st.top()] <= a[i]) st.pop();
        L[i] = st.top() + 1;
        st.push(i);
    }
    for(int i=0; i<n; i++){
        cout<<(i - L[i]) + 1 << ' ';
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}