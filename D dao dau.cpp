#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
long a[1000006]={};
int main()
{	
	long n,k;
	scanf("%ld%ld", &n, &k);
	long long dem=0, s=0;
	for(long i=0;i<n;i++)
	{
		scanf("%ld", &a[i]);
		if(a[i]<0) dem++;
	}
	if(dem==0)
	{
		sort (a,a+n);
		while(k--)
		{
			a[0]=-a[0];
		}
		for(long i=0;i<n;i++)
		{
			s=s+a[i];
		}
		printf("%lld", s);
	}
	else
	{
		sort (a,a+n);
		if(dem>=k)
		{
			for(long i=0;i<k;i++)
			{
				a[i]=-a[i];
			}
			for(long i=0;i<n;i++)
			{
				s=s+a[i];
			}
			printf("%lld",s);
		}
		if(dem<k)
		{
			for(long i=0;i<dem;i++)
			{
				a[i]=-a[i];
			}
			sort (a,a+n);
			k=k-dem;
			while(k--)
			{
				a[0]=-a[0];
			}
			for(long i=0;i<n;i++)
			{
				s=s+a[i];
			}
			printf("%lld", s);
		}
	}
 
 	return 0;
}
