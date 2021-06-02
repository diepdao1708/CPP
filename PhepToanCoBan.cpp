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
string s;
bool OP(char c){
    return(c == '*' || c == '/');
}
void Run()
{
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(OP(s[i])){
            cout<<"WRONG PROBLEM!"<<endl;
            return;
        }
    }
    bool ok = 1;
    vector<int> a, b, c;
    if(s[0] == '?' && s[1] != '?'){
        for(int j=1; j<=9; j++){
            int x = j*10 + (s[1] - '0');
            a.push_back(x);
        }
    } else if(s[0] != '?' && s[1] == '?'){
        for(int j=0; j<=9; j++){
            int x = (s[0] - '0')*10 + j;
            a.push_back(x);
        }
    } else if(s[0] == '?' && s[1] == '?'){
        for(int j=10; j<=99; j++){
            a.push_back(j);
        }
    } else if(s[0] != '?' && s[1] != '?'){
        int x = (s[0] - '0')*10 + (s[1] - '0');
        a.push_back(x);
    }
    //-----
    if(s[5] == '?' && s[6] != '?'){
        for(int j=1; j<=9; j++){
            int x = j*10 + (s[6] - '0');
            b.push_back(x);
        }
    } else if(s[5] != '?' && s[6] == '?'){
        for(int j=0; j<=9; j++){
            int x = (s[5] - '0')*10 + j;
            b.push_back(x);
        }
    } else if(s[5] == '?' && s[6] == '?'){
        for(int j=10; j<=99; j++){
            b.push_back(j);
        }
    } else if(s[5] != '?' && s[6] != '?'){
        int x = (s[5] - '0')*10 + (s[6] - '0');
        b.push_back(x);
    }
    //--------
    if(s[10] == '?' && s[11] != '?'){
        for(int j=1; j<=9; j++){
            int x = j*10 + (s[11] - '0');
            c.push_back(x);
        }
    } else if(s[10] != '?' && s[11] == '?'){
        for(int j=0; j<=9; j++){
            int x = (s[10] - '0')*10 + j;
            c.push_back(x);
        }
    } else if(s[10] == '?' && s[11] == '?'){
        for(int j=10; j<=99; j++){
            c.push_back(j);
        }
    } else if(s[10] != '?' && s[11] != '?'){
        int x = (s[10] - '0')*10 + (s[11] - '0');
        c.push_back(x);
    }
    // for(int i=0; i<a.size(); i++){
    //     cout<<a[i]<<' ';
    // }
    // cout<<endl;
    // for(int i=0; i<b.size(); i++){
    //     cout<<b[i]<<' ';
    // }
    // cout<<endl;
    // for(int i=0; i<c.size(); i++){
    //     cout<<c[i]<<' ';
    // }
    if(s[3] == '?'){
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<b.size(); j++){
                for(int k=0; k<c.size(); k++){
                    if(a[i] + b[j] == c[k]){
                        ok = 0;
                        cout<<a[i]<<" + "<<b[j]<<" = "<<c[k]<<endl;
                        return;
                    } else if(a[i] - b[j] == c[k]){
                        ok = 0;
                        cout<<a[i]<<" - "<<b[j]<<" = "<<c[k]<<endl;
                        return;
                    }
                }
            }
        }
    } else if(s[3] == '+'){
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<b.size(); j++){
                for(int k=0; k<c.size(); k++){
                    if(a[i] + b[j] == c[k]){
                        ok = 0;
                        cout<<a[i]<<" + "<<b[j]<<" = "<<c[k]<<endl;
                        return;
                    }
                }
            }
        }
    } else if(s[3] == '-'){
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<b.size(); j++){
                for(int k=0; k<c.size(); k++){
                    if(a[i] - b[j] == c[k]){
                        ok = 0;
                        cout<<a[i]<<" - "<<b[j]<<" = "<<c[k]<<endl;
                        return;
                    }
                }
            }
        }
    }
    if(ok) cout<<"WRONG PROBLEM!";
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    cin.ignore();
    while(T--) Run();
    //cerr<<"DIEP";
    return 0;
}