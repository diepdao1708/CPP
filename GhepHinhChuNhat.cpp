#include<bits/stdc++.h>
using namespace std;
struct hcn
{
    long long a, b;
};
bool cmp(hcn a1, hcn b1)
{
    return (a1.a>b1.a);
}
void Run()
{
    vector<hcn> cn(3);
    for(int i=0; i<3; i++)
    {
        int a1, b1;
        cin>>a1>>b1;
        if(a1>b1)
        {
            cn[i].a=a1;
            cn[i].b=b1;
        }
        else 
        {
            cn[i].b=a1;
            cn[i].a=b1;
        }
    }
    sort(cn.begin(), cn.end(), cmp);
    if(cn[1].a+cn[2].a==cn[0].a)
    {
        if(cn[1].b==cn[2].b&&cn[1].b+cn[0].b==cn[0].a)
        {
            cout<<"YES";
            return;
        }
    }
    if(cn[1].a+cn[2].b==cn[0].a)
    {
        if(cn[1].b==cn[2].a&&cn[1].b+cn[0].b==cn[0].a)
        {
            cout<<"YES";
            return;
        }
    }
    if(cn[1].b+cn[2].a==cn[0].a)
    {
        if(cn[1].a==cn[2].b&&cn[1].a+cn[0].b==cn[0].a)
        {
            cout<<"YES";
            return;
        }
    }
    if(cn[1].b+cn[2].b==cn[0].a)
    {
        if(cn[1].a==cn[2].a&&cn[1].a+cn[0].b==cn[0].a)
        {
            cout<<"YES";
            return;
        }
    }
    if(cn[0].a==cn[1].a&&cn[1].a==cn[2].a)
    {
        if(cn[0].b+cn[1].b+cn[2].b==cn[0].a)
        {
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
 
}
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--) Run();
    return 0;
} 