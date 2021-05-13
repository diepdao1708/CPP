#include<bits/stdc++.h>
using namespace std;
vector<unsigned long long> f;
void khoitao()
{
	f.push_back(1);
	f.push_back(1);
	for(int i=2; i<=92; i++)
	{
		f.push_back(f[f.size()-1]+f[f.size()-2]);
	}
}
void truyhoi(int n,unsigned long long k)
{
    if (k==f[n])
    {
        if(n>1) cout<<"B"<<endl;
        if(n==0) cout<<"A"<<endl;
        if(n==1) cout<<"B"<<endl;
        return;
    }
    if (k>f[n-2])
    {
        truyhoi(n-1,k-f[n-2]);
    }
    else truyhoi(n-2,k);
}
int main()
{
	khoitao();
	int T;
	cin>>T;
	for(int t=0; t<T; t++)
	{
    	int n;
    	unsigned long long k;
        cin>>n>>k;
		truyhoi(n,k);
	}
    return 0;
}
 