#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
  
int minSwaps(int arr[], int n)
{
	int dem = 0;
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
    	min_idx = i;
    	for (j = i+1; j < n; j++)
    		if (arr[j] < arr[min_idx])
        		min_idx = j;
		if(min_idx != i) dem++;
        swap(arr[min_idx], arr[i]);
	}
	return dem;
}
 
  
int main()  
{ 
    int t; cin>>t;
	while(t--)
	{
		int a[1004]={};
		int n; cin>>n;
		for(int i=0; i<n; i++) cin>>a[i];
		cout<<minSwaps(a, n)<<endl;
	}
    
}