#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
void PTS(int sum, int pre, vector<int> pos)
{
	if(sum == 0)
	{
		cout<<'(';
		for(int i=0; i<pos.size()-1; i++)
		{
			cout<<pos[i]<<' ';
		}
		cout<<pos.back()<<") ";
		return;
	}
	for(int i=pre; i>=1; i--)
	{
		if(i<=sum)
		{
			pos.push_back(i);
			PTS(sum-i, i, pos);
			pos.pop_back();
		}
	}
}
void Run()
{
	int n; cin>>n;
	vector<int> pos;
	PTS(n, n, pos);
    cout<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}