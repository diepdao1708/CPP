#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int a[101]={};
int n, s;
void pre()
{
	for(int i=1; i<=100; i++) a[i]=i*i;
}
void Run()
{
	cin >> s;
	vector<vector<int> > F(101, vector<int> (s+1));
	for(int i = 0; i <= 100; i++) F[i][0] = 0;
	for(int j = 0; j <= s; j++) F[0][j] = j;
	for(int i = 1; i <= 100; i++)
		for(int j = 1; j <= s; j++)
		{
			F[i][j] = F[i-1][j];
			if(j-a[i]>=0)  F[i][j] = min(F[i][j], F[i][j-a[i]] + 1); 
		}
	cout << F[100][s]<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	pre();
	while(T--) Run();
	return 0;
}