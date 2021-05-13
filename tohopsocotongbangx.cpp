#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, k;
vector<int> a;
bool ok=0;
void Try(int s, vector<int> pos)
{
	if(s==k) 
	{
		ok=1;
		cout<<"[";
		for(int j=0; j<pos.size()-1; j++) cout<<a[pos[j]]<<' ';
		cout<<a[pos.back()]<<"]";
		return;
	}
	else if(s>k) return;
	for(int i=((pos.size())? pos.back(): 0); i<n; i++)
	{
		pos.push_back(i);
		Try(s+a[i], pos);
		pos.pop_back();
		
	}
}
void Run()
{
	ok=0;
	cin>>n>>k;
	a.resize(n);
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a.begin(), a.end());
	vector<int> pos;
	Try(0, pos);
	if(ok==0) cout<<"-1";
	cout<<'\n';
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}