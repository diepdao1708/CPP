#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int n;
		cin>>n;
		int d=0;
        while(n>=1000)
        {
            n-=1000;
            d++;
        }
		while(n>=500)
		{
			n=n-500;
			d++;
		}
		while(n>=200)
		{
			n=n-200;
			d++;
		}
		while(n>=100)
		{
			n=n-100;
			d++;
		}
		while(n>=50)
		{
			n=n-50;
			d++;
		}
		while(n>=20)
		{
			n=n-20;
			d++;
		}
		while(n>=10)
		{
			n=n-10;
			d++;
		}
		while(n>=5)
		{
			n=n-5;
			d++;
		}
		while(n>=2)
		{
			n=n-2;
			d++;
		}
		while(n>=1)
		{
			n=n-1;
			d++;
		}
		cout<<d<<endl;
	}
 
 	return 0;
}