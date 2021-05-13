#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, m, a[100005], b[100005];
void Union(int a[], int b[], int m, int n)
{
    int i=0, j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            cout<<a[i++]<<' ';
        }
        else
        {
            if(b[j]<a[i]) 
            {
                cout<<b[j++]<<' ';
            }
            else 
            {
                cout<<b[j++]<<' ';
                i++;
            }
        }
    }
    while(i<m) cout<<a[i++]<<' ';
    while(j<n) cout<<b[j++]<<' ';
}
void Intersection(int a[], int b[], int m, int n)
{
    int i=0, j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j]) i++;
        else
        {
            if(b[j]<a[i]) j++;
            else 
            {
                cout<<a[i]<<' ';
                i++;
                j++;
            }
        }
        
    }
}
void Run()
{
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    sort(a, a+n);
    sort(b, b+m);
    Union(a, b, n, m);
    cout<<endl;
    Intersection(a, b, n, m);
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}