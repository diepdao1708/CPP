#include<bits/stdc++.h>
using namespace std;
long long M=1000000007;
int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	long long n, i, j; 
	cin>>n;
	long long x0=0, x1=0, x2=0, x3=1;
	long long s=1;
	for(i=1; i<=n; i++)
	{
		long long y0,y1,y2,y3;
		y0=(x1+x2+x3)%M;
		y1=(x0+x2+x3)%M;
		y2=(x0+x1+x3)%M;
		y3=(x0+x1+x2)%M;
		x0=y0;
		x1=y1;
		x2=y2;
		x3=y3;
	}
	cout<<x3;
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll mod=1000000007;
ll f[10000001][4]; // so cach di tu vi tri thu i ma ket thuc tai dia diem j
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
	f[0][3]=1;
    for(ll i=1;i<=n;i++){
    	for(ll j=0;j<=3;j++){
    		for(ll k=0;k<=3;k++){
    			if(k!=j)
    				f[i][j]=(f[i][j]+f[i-1][k])%mod;
			}
		}
	}
    cout<<f[n][3];
	return 0;
}
*/