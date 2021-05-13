#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int t=1;
void Run()
{
    int n; cin>>n; cin.ignore();
    string s; cin>>s;
    int len=s.length();
    int i = len-2;
    while(s[i+1] <= s[i]) i--;
    if(i<0)
    {
        cout<<t++<<' ';
        cout<<"BIGGEST";
        return;
    }
    int k = len-1;
    while(s[i] >= s[k]) k--;
    swap(s[i], s[k]);
    sort(s.begin()+i+1, s.end());
    cout<<t++<<' ';
    cout<<s;
}
int main()
{
    int T=1;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        Run();
        cout<<"\n";
    }
    return 0;
}