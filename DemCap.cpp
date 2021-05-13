#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, m, x[100005], y[100005];
int count(int x, int y[], int n, int a[])
{
	if(x == 0) return 0;
	if(x == 1) return a[0];
	int it = upper_bound(y, y+n, x) - y;
	int ans = n - it;
	ans += (a[0] + a[1]);
	if(x == 2) ans -= (a[3] +a[4]);
	if(x == 3) ans += a[2];
	return ans;
}
int countPairs(int x[], int y[], int m, int n)
{
	int a[5] = {0};
	for(int i=0; i<n; i++)
	{
		if(y[i] < 5) a[y[i]]++;
	}
	sort(y, y+n);
	int sum = 0;
	for(int i=0; i<m; i++)
	{
		sum += count(x[i], y, n, a);
	}
	return sum;
}
void Run()
{
	cin>>m>>n;
	for(int i=0; i<m; i++) cin>>x[i];
	for(int i=0; i<n; i++) cin>>y[i];
	cout<<countPairs(x, y, m, n)<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}