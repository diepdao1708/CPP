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
    string s;
    getline(cin, s);
    int dem = 1;
    stack<int> st;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '(') {
            cout<<dem<<' ';
            st.push(dem);
            dem++;
            continue;
        }
        if(s[i] == ')'){
            cout<<st.top()<<' ';
            st.pop();
        }
        
    }
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    cin.ignore();
    while(T--) Run();
    return 0;
} 