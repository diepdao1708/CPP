#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second
using namespace std;
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T)
    {
        int n;
        long long res=0;
        cin>>n;
        vector<int> a(n);
        FORT(i,0,n) cin>>a[i];
        int i=0;
        while (i<a.size())
        {
            int maxx=-1e9-7;
            while (i<a.size()&&a[i]<0) 
            {
                maxx=max(maxx,a[i]);
                i++;
            }
            if (maxx!=-1e9-7) res=res+maxx;
            maxx=-1e9-7;
            while (i<a.size()&&a[i]>0) 
            {
                maxx=max(maxx,a[i]);
                i++;
            }
            if (maxx!=-1e9-7) res=res+maxx;
        }
        cout<<res<<endl;
    }
    return 0;
}