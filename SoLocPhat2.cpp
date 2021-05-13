
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
vector<long long> res;
long long in(int n)
{
	long long ans=0;
    for(int i=0; i<n; i++) 
	{
		if(a[i]==0) ans=ans*10+6;
		else ans=ans*10+8;
	}
    return ans;
}
void sinhnhiphan(int n)
{
    while(1)
    {
        res.push_back(in(n));
        int i=n-1;
        while(i>=0&&a[i]==1) i--;
        if(i<0) break;
        a[i]=1;
        for(int j=i+1; j<n; j++) a[j]=0;
    }
}
void Run()
{
	res.clear();
	int n; cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<i; j++) a[j]=0;
		sinhnhiphan(i);
	}
    cout<<res.size()<<endl;
	for(int i=0; i<res.size(); i++) cout<<res[i]<<' ';
	cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}