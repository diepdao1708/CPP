
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int a[20];
void in(int n)
{
    for(int i=0; i<n; i++) 
	{
		if(a[i]==0) cout<<'8';
		else cout<<'6';
	}
    cout<<' ';
}
void sinhnhiphan(int n)
{
    while(1)
    {
        in(n);
        int i=n-1;
        while(i>=0&&a[i]==1) i--;
        if(i<0) break;
        a[i]=1;
        for(int j=i+1; j<n; j++) a[j]=0;
    }
}
void Run()
{
	
	int n; cin>>n;
	for(int i=n; i>=1; i--)
	{
		for(int j=0; j<i; j++) a[j]=0;
		sinhnhiphan(i);
	}
    
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}