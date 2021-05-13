#include<bits/stdc++.h>
using namespace std;


int binarysearch(int a[], int x, int left, int right)
{
	if(left > right) return -1;
	int mid = (left + right) / 2;
	if(x==a[mid])
		return mid;
	if(x<a[mid])
		return binarysearch(a,x,left,mid-1);
	if(x>a[mid])
		return binarysearch(a,x,mid+1,right);	
}
int main()
{
	int n,x;
	cin>>n>>x;
	int a[1000006]={};
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	} 
	cout<<binarysearch(a, x, 0, n-1);

 	return 0;
}

