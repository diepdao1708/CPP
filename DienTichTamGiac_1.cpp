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
    double x1, y1, x2, y2, x3, y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    if ((a+b)>c && (a+c)>b && (b+c)>a){
		double p = (a+b+c)/2;
		double s = sqrt (p*(p-a)*(p-b)*(p-c));
		printf("%0.2f", s);
	}
	else printf ("INVALID");
    
    
    cout<<"\n";
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}