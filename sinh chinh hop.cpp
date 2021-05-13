#include<bits/stdc++.h>
using namespace std;
int a[100]={}, b[10]={}, n, k, stop=0, stop1=0;
void khoitao()
{
    for(int i=1; i<=k; i++)
    {
        a[i]=i;
        b[i]=i;
    }
}
void in()
{
    for(int i=1; i<=k; i++)
        cout<<a[b[i]]<<' ';
    cout<<endl;
}
void sinhhv()
{
    int i=k-1, m=k;
    while(i>0&&b[i]>b[i+1]) i--;
    while(b[m]<b[i]) m--;
    if(i==0) stop1=1;
    swap(b[m], b[i]);
    m=k;
    i++;
    while(i<m)
    {
        swap(b[i],b[m]);
        i++;
        m--;
    }
}
void sinh()
{
    int i=k;
    while(a[i]==n-k+i) i--;
    if(i==0) stop=1;
    else a[i]++;
    int p=a[i];
    while(i<=k)
    {
        a[i++]=p++;
    }
}
void next()
{
    while(stop==0)
    {
        while(stop1==0)
        {
            in();
            sinhhv();
        }
        stop1=0;
        for(int i=1; i<=k; i++) b[i]=i;
        sinh();
    }
}
int main()
{
    cin>>n>>k;
    khoitao();
    next();
    return 0;
}
