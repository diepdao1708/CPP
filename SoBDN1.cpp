#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
long long n;


void Run()
{
	cin>>n;
	vector<int> vec;
	while(n>0)
	{
		vec.push_back(n%10);
		n/=10;
	}
	for(int i=vec.size()-1; i>=0; i--)
	{
		if(vec[i]>=2) 
		{
			for(int j=i; j>=0; j--)
			{
				vec[j]=1;
			}
			break;
		}
	}
	long long res = 0;
	for(int i=vec.size()-1; i>=0; i--)
	{
		res += pow(2, i) * vec[i];
	}
	cout<<res<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}