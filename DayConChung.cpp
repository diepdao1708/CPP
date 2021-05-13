#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n1, n2, n3;
ll a[100005], b[100005], c[100005];
void Run()
{
    cin>>n1>>n2>>n3;
    for(int i=0; i<n1; i++) cin>>a[i];
    for(int i=0; i<n2; i++) cin>>b[i];
    for(int i=0; i<n3; i++) cin>>c[i];
    bool ok = false;
    int i=0, j=0, k=0;
    while(i<n1 && j<n2 && k<n3){
        if(a[i] < b[j] || a[i] < c[k]) i++;
        else if(b[j] < a[i] || b[j] < c[k]) j++;
        else if(c[k] < a[i] || c[k] < b[j]) k++;
        else{
            cout<<a[i]<<' ';
            ok = true;
            i++; j++; k++;
        }
    }
    if(ok==false) cout<<"NO";
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}