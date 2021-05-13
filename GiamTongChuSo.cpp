#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
string n;
int k;
ll sum(string s){
	ll ans=0;
	for(int i=0; i<s.length(); i++){
		ans+=(s[i]-'0');
	}
	return ans;
}
ll so(string s){
	ll ans=0;
	for(int i=0; i<s.length(); i++){
		ans=ans*10+(s[i]-'0');
	}
	return ans;
}
void Run()
{
	cin>>n>>k;
	ll res=so(n);
	if(sum(n)<=k){
		cout<<0<<endl;
		return;
	}
	for(int i=n.length()-1; i>=0; i--){
		if(sum(n)>k){
			int nho=1;
			n[i]='0';
			if(i-1>=0) 
				for(int j=i-1; j>=0; j--){
					if(n[j]=='9') n[j]='0';
					else{
						n[j]+=nho;
						nho--;
						break;
					}
				if(j==0) n='1'+n;
			}
			else {
				n[0]='0';
				n='1'+n;
			}
			
		} else break;
	}
	
	if(sum(n)>k) {
		n[0]='0';
		n='1'+n;
	}
	cout<<so(n)-res<<endl;

}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}