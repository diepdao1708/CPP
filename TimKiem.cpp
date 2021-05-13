#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int check(int a[],int x, int left, int right)
{
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(a[mid]==x)
			return 1;
		else if(a[mid]>x)
			right=mid-1;
		else
			left=mid+1;
	}
	return -1;
}
int n, k, a[1000006];
void Run()
{  
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>a[i];
    cout<<check(a, k, 1, n)<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}