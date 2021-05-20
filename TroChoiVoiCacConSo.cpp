#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<int> a;
bool check(){
    for(int i=1; i<a.size(); i++){
        if(abs(a[i]-a[i-1]) == 1) return 0;
    }
    return 1;
}
void Run()
{
    int n; cin>>n;
    a.resize(n);
    for(int i=0; i<n; i++) a[i] = i+1;
    do{
        if(check()){
            for(int i=0; i<n; i++) cout<<a[i];
            cout<<endl;
        }
    }while(next_permutation(a.begin(), a.end()));
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}