#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int a[10][10], X[100], xuoi[100], nguoc[100], col[100];
int maxx=0, n=8;
//vector<vector<int> > res;
void Print()
{
    int res=0;
    for(int i=1; i<=n; i++)
    {
        //cout<<X[i]<<' ';
        res+=a[i][X[i]];
    }
    //cout<<endl;
    maxx=max(maxx, res);
}
void BackTrack(int i)
{	
	for(int j=1; j<=n; j++){
		if(col[j]&&xuoi[i-j+n]&&nguoc[i+j-1])
        {		
			X[i]=j;			
			col[j]=0;		
			xuoi[i-j+n]=0;	
			nguoc[i+j-1]=0;	
			if(i==n)		
				Print();
			else			
				BackTrack(i+1);
			col[j]=1;	
			xuoi[i-j+n]=1;	
			nguoc[i+j-1]=1;	
		}
	}
	return;
}
void Run()
{
    maxx=0;
    for(int i=1; i<=2*n-1; i++) 
    {
        col[i]=xuoi[i]=nguoc[i]=1; 
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }
    BackTrack(1);
    cout<<maxx<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}