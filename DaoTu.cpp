#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<string> res;
string s;
void pre(){
    string s1 = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' '){
            s1 = s1 + s[i];
        }
        else {
            if(s1.length() > 0) res.push_back(s1);
            s1 = "";
        }
    }
    if(s1.length() > 0) res.push_back(s1);
}
void Run()
{
    getline(cin, s);
    res.clear();
    pre();
    for(int i=res.size()-1; i>=0; i--) cout<<res[i]<<' ';
    cout<<'\n';
}
int main()
{
    int T=1;
    cin>>T;
    cin.ignore();
    while(T--) Run();
    return 0;
}