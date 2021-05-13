#include<bits/stdc++.h>
using namespace std;
string s;
bool Var(char c)
{
    return (c>='a'&&c<='z');
}//Var
bool Var_so(char c)
{
    return (c>='0'&&c<='9');
}//Var_so
int sl(string s)
{
    int k=0;
    for(int i=0; i<s.length(); i++)
    {
        k=k*10+(s[i]-'0');
    }
    return k;
}//sl
void Run()
{
    cin>>s;
    stack<char> st;
    st.push('#');
    string pol="";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='[') 
        {
            st.push(s[i]); 
            continue;
        }
        if(Var(s[i]))
        {
            st.push(s[i]);
            continue;
        }
        if(Var_so(s[i]))
        {
            st.push(s[i]);
            continue;
        }
        if(s[i]==']')
        {
            pol="";
            while(st.top()!='[')
            {
                pol=st.top()+pol;
                st.pop();
            }
            st.pop();
            string so="";
            while(Var_so(st.top()))
            {
                so=st.top()+so;
                st.pop();
            }
            int k=sl(so);
            string pol1=pol;
            //cout<<k<<'\n';
            for(int i=1; i<k; i++)
            {
                pol=pol+pol1;
            }
            for(int j=0; j<pol.length(); j++)
            {
                st.push(pol[j]);
            }
            continue;
        }//if
    }//for
    if(st.size()-1==pol.length()) cout<<pol;
    else
    {
        pol="";
        while(st.size()>1)
        {
            pol=st.top()+pol;
            st.pop();
        }        
        cout<<pol;
    }
    
    cout<<'\n';
}
void Test()
{
    Run();
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) Test();
    return 0;
}