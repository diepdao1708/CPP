#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
vector<string> res;
void PTS(int sum, int pre, vector<int> pos)
{
	if(sum == 0)
	{
        string s="";
        s=s+'(';
		for(int i=0; i<pos.size()-1; i++)
		{
            s = s + (char)(pos[i] + '0') + ' ';
		}
        if(pos.back() < 10) s = s + (char)(pos.back() + '0') + ')' + ' ';
        else s = s + "10" + ')' + ' ';
        res.push_back(s);
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
    res.clear();
	int n; cin>>n;
	vector<int> pos;
	PTS(n, n, pos);
    cout<<res.size()<<endl;
    for(int i=0; i<res.size(); i++){
        cout<<res[i];
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
// (5) (4 1) (3 2) (3 1 1) (2 2 1) (2 1 1 1) (1 1 1 1 1)