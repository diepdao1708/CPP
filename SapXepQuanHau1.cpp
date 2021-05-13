#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int n, col[100], xuoi[100], nguoc[100];
int dem=0;
void BackTrack(int i)
{
    for(int j=1; j<=n; j++)
    {
        if(col[j]&&xuoi[i-j+n]&&nguoc[i+j-1])
        {
            //cot j chua duoc su dung, duong cheo xuoi i-j+n chua dung,
            //duong cheo nguoc i+j-1 chua duoc su dung
            col[j]=0;		//danh dau cot j da co Hau
            xuoi[i-j+n]=0;	//danh dau duong cheo xuoi i-j+n da co Hau
            nguoc[i+j-1]=0;	//danh dau duong cheo nguoc i+j-1 da co Hau
            if(i==n) dem++;
            else BackTrack(i+1);
            col[j]=1;		//danh dau cot j chua co Hau
            xuoi[i-j+n]=1;	//danh dau duong cheo xuoi i-j+n chua co Hau
            nguoc[i+j-1]=1;	//danh dau duong cheo nguoc i+j-1 chua co Hau
        }
    }
}
void Run()
{
    cin>>n;
    dem=0;
    for(int i=1; i<=2*n-1; i++)
    {
        col[i]=xuoi[i]=nguoc[i]=1;
    }
    BackTrack(1);
    cout<<dem;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}