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
    int n;
    cin>>n;
    int a[1000];
    for(int i=0; i<n; i++) cin>>a[i];
    int k = 1;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j+1]<a[j]) swap(a[j+1], a[j]);
        }
        bool ok=true;
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1]) 
            {
                ok=false;
                break;
            }
        }
        cout<<"Buoc "<<k++<<": ";
        for(int j=0; j<n; j++) cout<<a[j]<<' ';
        cout<<endl;
        if(ok==true) return;
        
    }
    
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}