#include<bits/stdc++.h>
using namespace std;
string str;
void read()
{
    getline(cin, str);
}
vector<int> so;
vector<string> tu;
vector<int> dd;
void init()
{
    so.clear();
    tu.clear();
    dd.clear();
}
int BienDoiSo(string x)
{
    int f=0;
    if(x[0]=='-') f=1;
    int s=0;
    for(int i=f; i<x.length(); i++)
    {
        s=s*10+x[i]-'0';
    }
    if(f==1) return 0-s;
    return s;
}
void TachString()
{
    stack<string> st;
    for(int i=str.length()-1; i>=0; i--)
    {
        if(str[i]==','||str[i]=='.')
        {
            st.push("");
        }
        else if(str[i]!=' ')
        {
            string top=st.top();
            st.pop();
            top=str[i]+top;
            st.push(top);
        }
    }
    while(!st.empty())
    {
        string top=st.top();
        st.pop();
        if(top[0]=='-'||(top[0]>='0'&&top[0]<='9'))
        {
            so.push_back(BienDoiSo(top));
            dd.push_back(1);
        }
        else
        {
            tu.push_back(top);
            dd.push_back(0);
        }
    }
}
void Sort()
{
    sort(so.begin(), so.end());
    sort(tu.begin(), tu.end());
}
void Print()
{
    int soo=0;
    int tuu=0;
    for(int i=0; i<dd.size()-1;i++)
    {
        if(dd[i]==1)
        {
            cout<<so[soo]<<", ";
            soo++;
        }
        else
        {
            cout<<tu[tuu]<<", ";
            tuu++;
        }
    }
    if(dd[dd.size()-1]==1)
    {
        cout<<so[soo]<<".";
        soo++;
    }
    else
    {
        cout<<tu[tuu]<<".";
        tuu++;
    }
    cout<<endl;
}
int main()
{
    while(1)
    {
        read();
        if(str==".") break;
        init();
        TachString();
        Sort();
        Print();
    }
    return 0;
}
