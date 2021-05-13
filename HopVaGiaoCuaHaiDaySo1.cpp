#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, m, a[100005], b[100005], dd[100005];
void Union(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; 
    while (i < m && j < n) 
    { 
        if (arr1[i] < arr2[j]) 
            cout << arr1[i++] << " "; 
  
        else if (arr2[j] < arr1[i]) 
            cout << arr2[j++] << " "; 
  
        else { 
            cout << arr2[j++] << " "; 
            i++; 
        } 
    } 
    while (i < m) 
        cout << arr1[i++] << " "; 
  
    while (j < n) 
        cout << arr2[j++] << " "; 
} 
void Intersection(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; 
    while (i < m && j < n) 
    { 
        if (arr1[i] < arr2[j]) 
            i++; 
        else if (arr2[j] < arr1[i]) 
            j++; 
        else 
        { 
            cout << arr2[j] << " "; 
            i++; 
            j++; 
        } 
    } 
} 
void Run()
{
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
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