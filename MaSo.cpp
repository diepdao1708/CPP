#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n;
int a[100], b[100], dd[100];
vector<string> dau;
vector<string> cuoi;
string x="ABCDEF";
void print_np(){
    string s="";
    for(int i=1; i<=n; i++) s = s + (char)(a[i] + '0');
    cuoi.push_back(s);
}
void sinh_np(int i){
    for(int j=1; j<=n; j++){
        a[i] = j;
        if(i == n) print_np();
        else sinh_np(i+1);
    }
}
void print_hv(){
    string s="";
    for(int i=1; i<=n; i++) s=s+x[b[i]-1];
    dau.push_back(s);
}
void sinh_hv(int i){
    for(int j=1; j<=n; j++){
        if(dd[j]==1){
            b[i]=j;
            dd[j]=0;
            if(i==n) print_hv();
            else sinh_hv(i+1);
            dd[j]=1;
        }
    }
}

void Run()
{
    cin>>n;
    sinh_np(1);
    for(int i=1; i<=n; i++) dd[i]=1;
    sinh_hv(1);
    for(int i=0; i<dau.size(); i++){
        for(int j=0; j<cuoi.size(); j++){
            cout<<dau[i]<<cuoi[j]<<'\n';
        }
    }
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}