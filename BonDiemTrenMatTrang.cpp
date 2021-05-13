#include<bits/stdc++.h>
using namespace std;
struct oxyz
{
	int x,y,z;
	oxyz()
	{
		x=y=z=0;
	}
};
int main()
{
	int T;
	cin>>T;
	for(int t=0; t<T; t++)
	{
		oxyz a,b,c,d, ab, ac, n;
		cin>>a.x>>a.y>>a.z;
		cin>>b.x>>b.y>>b.z;
		cin>>c.x>>c.y>>c.z;
		cin>>d.x>>d.y>>d.z;
		ab.x=b.x-a.x;
		ab.y=b.y-a.y;
		ab.z=b.z-a.z;
		ac.x=c.x-a.x;
		ac.y=c.y-a.y;
		ac.z=c.z-a.z;
		n.x=ab.y*ac.z-ac.y*ab.z;
		n.y=ab.z*ac.x-ab.x*ac.z;
		n.z=ab.x*ac.y-ac.x*ab.y;
		if((n.x*(d.x-a.x)+n.y*(d.y-a.y)+n.z*(d.z-a.z))==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
 
 	return 0;
}