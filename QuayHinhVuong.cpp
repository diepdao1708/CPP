#include <bits/stdc++.h>
using namespace std;
 
// 1 2 3 4 5 6 // 1 5 2 4 6 3 // 4 1 3 5 2 6
map<string, int> dd;
 
string quay_trai(string a)
{
	string res="";
	res = res + a[0] + a[4] + a[1] + a[3] + a[5] + a[2];
	return res; 
}
 
string quay_phai(string a)
{
	string res="";
	res = res + a[3] + a[0] + a[2] + a[4] + a[1] + a[5];
	return res; 
}
 
void BFS(string a, string b)
{
	queue <string> Queue;
	Queue.push(a);
	dd[a]=1;
	while(Queue.size() > 0)
	{
		string s = Queue.front();
		Queue.pop();
		if(s == b) 
		{
			cout<<dd[s] - 1;
			return;
		}
		string a1 = quay_trai(s);
		if(dd[a1] == 0)
		{
			Queue.push(a1);
			dd[a1] = dd[s] + 1;
		}
		string a2 = quay_phai(s);
		if(dd[a2] == 0)
		{
			Queue.push(a2);
			dd[a2] = dd[s] + 1;
		}
	}
}
 
void Run()
{
    dd.clear();
	string a, b;
	for(int i=0; i<6; i++)
	{
		int tmp;
		cin>>tmp;
		a += (char)(tmp+'0');
	}
	for(int i=0; i<6; i++)
	{
		int tmp;
		cin>>tmp;
		b += (char)(tmp+'0');
	}
	BFS(a, b);
	cout<<endl;
}
 
int main()
{
	int t=1;
	cin>>t;
	while(t--) Run();
	return 0;
}