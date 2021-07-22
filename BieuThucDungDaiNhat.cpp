#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
#define ll long long
using namespace std;
const int oo = 1e9;
void Run()
{
    string s; cin>>s;
    int dem = 0;
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '(') st.push(s[i]);
        else {
            if(!st.empty()) {
                dem+=2;
                st.pop();
            }
        }
    }
    cout<<dem<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}