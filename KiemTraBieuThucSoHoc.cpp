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
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            st.push(s[i]);
        if(s[i] == ')')
        {
            if(st.top() == '(')
            {
                cout<<"Yes"<<endl;
                return;
            }
            else
            {
                while(st.top() != '(' && st.size() > 0)
                {
                    st.pop();
                }
                st.pop();
            }
            
        }
    }
    cout<<"No"<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}