#include<bits/stdc++.h>
using namespace std;
 
void tapcon(int a[], int n, int k)
{
    int dd[20]={};
    for(int i=1; i<=k; i++) 
    {
        cin>>a[i];
        dd[a[i]]=1;
    }
    int i=k;
    int stop=0;
    while(a[i]==n-k+i) i--;
	if(i<1)	
		stop=1;
	else
	{
		a[i]++;
		for(int j=i+1; j<=k; j++)
		{
			a[j]=a[j-1]+1;
		}
	}
    int dem=0;
    if(stop==1) dem=k;
    else 
        for(int i=1; i<=k; i++) 
        {
            if(dd[a[i]]==0) dem++;
        }
    cout<<dem;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int a[20]={};
        tapcon(a, n, k);
        cout<<endl;
    }
    return 0;
} 