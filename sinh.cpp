#include<bits/stdc++.h>

using namespace std;
int a[100]={};
bool dd[100]={};
int n,k;
void in(int n)
{
    for(int i=1; i<=n; i++) cout<<a[i];
    cout<<endl;
}
void sinhnhiphan(int i)
{
    for(int j=0; j<2; j++)
    {
        a[i]=j;
        if(i==n) in(n);
        else sinhnhiphan(i+1);
    }
}
void sinhhoanvi(int i)
{
    for(int j=1; j<=n; j++)
    {
        if(dd[j]==0)
        {
            a[i]=j;
            dd[j]=1;
            if(i==n) in(n);
            else sinhhoanvi(i+1);
            dd[j]=0;
        }
    }
} 

void sinhtohop(int i)
{
    for(int j=a[i-1]+1; j<=n; j++)
    {
        a[i]=j;
        if(i==k) in(k);
        else sinhtohop(i+1);
    }
}
int main()
{
    cin>>n>>k;
    a[0]=0;
    sinhnhiphan(1);
    return 0;
}