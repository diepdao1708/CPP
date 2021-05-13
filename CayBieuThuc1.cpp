#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
string OP="+-*/";
bool Op(char c)
{
    for(int i=0; i<OP.length(); i++)
    {
        if(c==OP[i]) return true;
    }
    return false;
}
bool Var(char c)
{
    return (((c>='A') && (c<='Z')) || ((c>='a') && (c<='z')));
}
void Run()
{
    string s; cin>>s;
    stack<string> st;
    for(int i=0; i<s.length(); i++)
    {
        if(Var(s[i])) st.push(string(1, s[i]));
        else
        {
            string s1="";
            s1=s1+st.top(); st.pop();
            s1=s[i]+s1;
            s1=st.top()+s1; st.pop();
            st.push(s1);
        }
    }
    cout<<st.top()<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}