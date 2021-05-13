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
	int n;
	cin>>n;
	int a[500][500]={};
	for(int i=2*n; i>n; i--) a[1][i]=1;
	int h=n;
	for(int i=2; i<=n; i++){
		a[i][h]=1;
		h--;
	}
	int b[500][500]={};
	for(int i=1; i<=2*n; i++) b[1][i]=1;
	
	for(int i=2; i<=2*n; i++){
		b[i][i]=1;
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=2*n; j++){
			if(a[i][j]) cout<<"*";
			else cout<<' ';
		}
		for(int j=2*n; j>=1; j--){
			if(a[i][j]) cout<<"*";
			else cout<<' ';
		}
		cout<<endl;
	}
	for(int i=1; i<=2*n; i++){
		for(int j=1; j<=2*n; j++){
			if(b[i][j]) cout<<"*";
			else cout<<' ';
		}
		for(int j=2*n; j>=1; j--){
			if(b[i][j]) cout<<"*";
			else cout<<' ';
		}
		cout<<endl;
	}
}
int main()
{
	int T=1;
	//cin>>T;
	while(T--) Run();
	return 0;
}