#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
#define ll long long
using namespace std;
const int oo = 1e9;
int s, t;
void BFS(){
	queue<pair<int, int> > q;
	q.push(make_pair(s, 0));
	set<int> dd;
	dd.insert(s);
	while(!q.empty()){
		int u = q.front().first;
		int way = q.front().second;
		q.pop();
		if(u-1==t || u*2==t){
			cout<<way+1<<endl;
			return;
		}
		if(u==t){
			cout<<way<<endl;
			return;
		}
		if(u*2 <= t*2 && dd.count(u*2)==0){
			q.push(make_pair(u*2, way+1));
			dd.insert(u*2);
		}
		if(u-1>0 && dd.count(u-1)==0){
			q.push(make_pair(u-1, way+1));
			dd.insert(u-1);
		}
	}

}
void Run()
{
	cin>>s>>t;
	BFS();
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}