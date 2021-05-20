#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, k; 
string s;
int a[20]={};
vector<string> res;
void print(){
    string x="";
    for(int i=1; i<=k; i++) x=x+s[a[i]-1];
    res.push_back(x);
}
void sinh(int i){
    for(int j=a[i-1] + 1; j<=n-k+i; j++){
        a[i]=j;
        if(i==k) print();
        else sinh(i+1);
    }
}
void Run()
{
    cin>>n>>s;
    res.clear();
    for(int i=1; i<=n; i++){
        for(int j=0; j<=n; j++) a[i]=0;
        k=i;
        sinh(1);
    }
    sort(res.begin(), res.end());
    for(int i=0; i<res.size(); i++) cout<<res[i]<<' ';
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}