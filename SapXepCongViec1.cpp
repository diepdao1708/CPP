#include<bits/stdc++.h>
using namespace std;
struct job
{
	int bg;
	int fn;
};
bool sort_fn(job a, job b)
{
	return a.fn<b.fn;
}
int n;
void solve()
{
	cin>>n;
	job f[1001]={};
	for(int i=0; i<n; i++) cin>>f[i].bg;
	for(int i=0; i<n; i++) cin>>f[i].fn;
	sort(f, f+n, sort_fn);
	int dem=1;
	int kt=f[0].fn;
	for(int i=1; i<n; i++)
	{
		if(f[i].bg>=kt)
		{
			dem++;
			kt=f[i].fn;
		}
	}
	cout<<dem<<'\n';
}
int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}