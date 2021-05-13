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
        if(OP[i]==c) return 1;
    }
    return 0;
}
bool Var(char c)
{
    return ((c>='a' && c<='z') || (c>='A' && c<='Z'));
}
void Run()
{
    string s; cin>>s;
    stack<string> st;
    for(int i=0; i<s.length(); i++)
    {
        if(Var(s[i])) st.push(string(1, s[i]));
        if(Op(s[i]))
        {
            string s1="";
            s1=st.top()+s1;st.pop();
            s1=s[i]+s1;
            s1=st.top()+s1; st.pop();
            s1="("+s1+")";
            st.push(s1);
        }
    }
    s=st.top();
    string kq="";
    while(!st.empty()) st.pop();
    for(int i=s.length()-1; i>=0; i--)
    {
        if(Var(s[i])) kq=s[i]+kq;
        if(Op(s[i])) st.push(string(1, s[i]));
        if(s[i] == '(') 
        {
            kq=st.top()+kq; st.pop();
        }
    }
    while(!st.empty())
    {
        kq=st.top()+kq; st.pop();
    }
    cout<<kq<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}