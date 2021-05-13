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
    string s; cin>>s;
    stack<char> st;
    int xoa = 0, res = 0;
    for(int i=0; i<s.length(); i++){
        if(st.size() == 0){
            st.push(s[i]);
        } else if(st.top() == '[' && s[i] == ']'){
            st.pop();
            xoa += 2;
        } else if(st.top() == ']' && s[i] == '['){
            res += st.size() + xoa;
            st.pop();
        } else if(s[i] == '['){
            st.push(s[i]);
        } else if(st.top() == ']' && s[i] == ']'){
            st.push(s[i]);
        }
        
        if(st.size() == 0) xoa = 0;
        
    }
    cout<<res<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}