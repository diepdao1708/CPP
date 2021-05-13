#include<bits/stdc++.h>
using namespace std;
unsigned long long gcd(unsigned long long a, unsigned long long b)
{
	while(a>0)
	{
		if(a<b) swap(a,b);
		a=a%b;
	}
	return b;
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);

    return 0;
}