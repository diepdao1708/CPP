#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
void Run()
{
	ll a, b, n, s;
	cin>>a>>b>>n>>s;
	ll k=a*n;
	if(k+b<s) {
		cout<<"NO"<<endl;
		return;
	}
	if(k<=s && k+b>=s) {
		cout<<"YES"<<endl;
		return;
	}
	if(k>=s&&k%s==0) {
		cout<<"YES"<<endl;
		return;
	}
	ll h=k-s;
	h=h/n+1;
	h=k-h*n;
	if(h+b >= s){
		cout<<"YES"<<endl;
		return;
	}
	cout<<"NO"<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
} 	