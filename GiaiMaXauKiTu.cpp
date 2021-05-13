#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;

int so(string s){
    int res = 0;
    for(int i=0; i<s.length(); i++){
        res = res*10 + (s[i] - '0');
    }
    return res;
}

bool Var(char c){
    return (c >= 'a' && c <= 'z');
}

bool Num(char c){
    return (c >= '0' && c <= '9');
}

string gm(string s, int k){
    string res = s;
    for(int i=1; i<k; i++){
        res += s;
    }
    return res;
}

void Run()
{
    string s;
    cin>>s;
    stack<char> st;
    st.push('#');
    for(int i=0; i<s.length(); i++){
        if (Var(s[i]) || s[i]=='[' || Num(s[i])){
            st.push(s[i]);
            continue;
        }
        if(s[i] == ']'){
            string s1 = "";
            string tmp = "";
            while(!st.empty() && st.top() != '['){
                tmp = st.top() + tmp;
                st.pop();
            }
            st.pop();
            while(Num(st.top())){
                s1 = st.top() + s1;
                st.pop();
            }
            tmp = gm(tmp, so(s1));
            for(int j=0; j<tmp.length(); j++){
                st.push(tmp[j]);
            }
        }
    }
    string res="";
    while(st.top() != '#'){
        res = st.top() + res;
        st.pop();
    }
    cout<<res<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}