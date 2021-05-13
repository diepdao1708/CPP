#include<bits/stdc++.h>
using namespace std;
void quicksort(int arr[], int left, int right)
{
	int i=left;
	int j=right;
	int tmp;
	int pivot=arr[(left+right)/2];
	while(i<=j)
	{
		while(arr[i]<pivot) i++;
		while(arr[j]>pivot) j--;
		if(i<=j)
		{
			tmp=arr[i];
			arr[i]=arr[j];
			arr[j]=tmp;
			i++;
			j--;
		}
	}
	if(left<j) quicksort(arr, left, j);
	if(i<right) quicksort(arr, i, right);
}
int main()
{
	int n;
	cin>>n;
	int arr[10006]={};
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	quicksort(arr, 0, n-1);
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<' ';
	}
 	return 0;
}

