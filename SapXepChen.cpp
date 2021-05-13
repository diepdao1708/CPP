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
    int t, j;
    int k = 0;
    for(int i=1; i<n; i++)
    {
        cout<<"Buoc "<<k++<<": ";
        for(int h=0; h<i; h++) cout<<a[h]<<' ';
        cout<<endl;
        j=i-1;
        t=a[i];
        while(j>=0 && t<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
    cout<<"Buoc "<<k++<<": ";
    for(int h=0; h<n; h++) cout<<a[h]<<' ';
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}