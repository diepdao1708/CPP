#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, k, a[100];
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void print(){
    for(int i=1; i<=k; i++){
        cout<<s[a[i]-1];
    }
    cout<<'\n';
}
void sinh(int i){
    for(int j=a[i-1]+1; j<=n-k+i; j++){
        a[i] = j;
        if(i==k) print();
        else sinh(i+1);
    }
}
void Run()
{
    cin>>n>>k;
    a[0]=0;
    sinh(1);
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}