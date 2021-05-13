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
int a[20]={};

void print(){
    bool ok = 1;
    for(int i=2; i<=n; i++){
        if(a[i] == a[i-1] && a[i] == 1){
            ok = 0;
            break;
        }
    }
    if(a[1] == 1 && a[n] == 0){
        if(ok){
            for(int i=1; i<=n; i++){
                if(a[i] == 1) cout<<'H';
                else cout<<'A';
            }
            cout<<'\n';
        }
    }
    //for(int i=1; i<=n; i++) cout<<a[i]<<' ';
}
void sinh(int i){
    for(int j=0; j<=1; j++){
        a[i]=j;
        if(i==n) print();
        else sinh(i+1);
    }
}
void Run()
{
    for(int i=1; i<=n; i++) a[i] = 0;
    cin>>n;
    sinh(1);
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}