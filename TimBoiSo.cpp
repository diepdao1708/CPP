#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n;
vector<string> vec;
void generateNumbersUtil() 
{
	queue<string> q;
	q.push("9");
	for(int i=10000; i>0; i--)
	{
		string s1 = q.front();
		q.pop();
		vec.push_back(s1);
		string s2 = s1;
		q.push(s1 + "0");
		q.push(s1 + "9");
	}

}
long long so(string s)
{
	long long n=0;
	for(int i=0; i<s.length(); i++)
	{
		n = n*10 + (s[i]-'0');
	}
	return n;
}
void Run()
{
	cin>>n;
	for(int i=0; i<vec.size(); i++) 
	{
		if(so(vec[i]) % n == 0)
		{
			cout<<vec[i]<<endl;
			return;
		} 
	}
}
int main()
{
	int T=1;
	cin>>T;
	generateNumbersUtil();
	while(T--) Run();
	return 0;
}