#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, k, a[101], x[101];
bool cauhinhcuoi=false;
int dem=0;
void print()
{
	vector<int> res;
	for(int i=1; i<=n; i++) if(a[i]) res.push_back(x[i]);
	if(res.size()!=k) return;
	for(int i=1; i<res.size(); i++)
	{
		if(res[i]<res[i-1]) return;
	}
	//for(int i=0; i<res.size(); i++) cout<<res[i]<<" ";
	//cout<<'\n';
	dem++;
}
void sinh()
{
	int i=n;
	while(i>0 && a[i]==1) i--;
	if(i==0) cauhinhcuoi=true;
	a[i]=1;
	for(int j=i+1; j<=n; j++) a[j]=0;
}
void Run()
{
	cin>>n>>k;
	for(int i=1; i<=n; i++) cin>>x[i];
	for(int i=1; i<=n; i++) a[i]=0;
	while(!cauhinhcuoi)
	{
		print();
		sinh();
	}
	cout<<dem;
}
int main()
{
	int T=1;
	//cin>>T;
	while(T--) Run();
	return 0;
}