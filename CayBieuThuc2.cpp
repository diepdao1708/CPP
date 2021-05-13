#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;

bool Op(string s){
    if(s == "+" || s == "-" || s == "*" || s == "/") return 1;
}

int so(string s){
    int ans = 0;
    for(int i=0; i<s.length(); i++){
        ans = ans*10 + (s[i] - '0');
    }
    return ans;
}
void Run()
{
    int n;
    cin>>n;
    cin.ignore();
    string s; getline(cin, s);
    queue<int> st;
    string a="";
    for(int i=s.length()-1; i>=0; i--){
        if(s[i]==' '){
            if(a.length() > 0) st.push(so(a));
            a="";
            continue;
        }
        if(s[i] >= '0' && s[i] <= '9') {
            a=s[i]+a;
            continue;
        }
        int x = st.front(); st.pop();
        int y = st.front(); st.pop();
        int k;
        if(s[i] == '*'){
            k = y * x;
        }
        if(s[i] == '/'){
            k = y / x;
        }
        if(s[i] == '+'){
            k = y + x;
        }
        if(s[i] == '-'){
            k = y - x;
        }
        st.push(k);
    }
    cout<<st.front()<<endl;
    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}