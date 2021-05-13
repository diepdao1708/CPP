#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<int> a;
void Run()
{
    int n; cin>>n;
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    stack<int> st;
    vector<int> G(n), S(n);
    for(int i = 0; i < n; i++)
    {
        if (st.empty()) st.push(i);
        else
        {
            while (st.size() && a[st.top()] < a[i])
            {
                G[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }
    while (st.size())
    {
        G[st.top()] = -1;
        st.pop();
    }

    for(int i = 0; i < n; i++)
    {
        if (st.empty()) st.push(i);
        else
        {
            while (st.size() && a[st.top()] > a[i])
            {
                S[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }
    while (st.size())
    {
        S[st.top()] = -1;
        st.pop();
    }

    for(int i = 0; i < n; i++)
    {
        if (G[i] == -1 || S[G[i]] == -1) cout << -1 <<' ';
        else 
            cout << a[S[G[i]]] << ' ';
    }
    cout << endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}