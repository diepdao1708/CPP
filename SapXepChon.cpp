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
        int min_id = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[min_id]>a[j]) min_id = j; 
        }
        swap(a[i], a[min_id]);
        cout<<"Buoc "<<k++<<": ";
        for(int i=0; i<n; i++) cout<<a[i]<<' ';
        cout<<endl;
    }
    
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}