#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second
using namespace std;
int kt[10]={};
map<int,int> tanso;
struct dat
{
    int gt,vt;
};
void prepare()
{
    kt[2]=kt[3]=kt[5]=kt[7]=1;
} //prepare
bool check(int n)
{
    while (n>0)
    {
        if (kt[n%10]==0) return 0;
        n/=10;
    }
    return 1;
} //check
bool cmp(dat a, dat b)
{
    return a.vt<b.vt;
} //cmp
void solve()
{
    prepare();
    int n,tt=-1;
    vector<dat> luu;
    while (cin>>n)
    {
        tt++;
        if (n==-1) break;
        if (check(n)) 
        {
            tanso[n]++;
            dat tmp;
            tmp.gt=n;
            tmp.vt=tt;
            luu.push_back(tmp);
        }
    } //while
    sort(luu.begin(),luu.end(),cmp);
    for(int i=0; i<luu.size(); i++)
        if (tanso[luu[i].gt]>0)
        {
            cout<<luu[i].gt<<' '<<tanso[luu[i].gt]<<endl;
            tanso[luu[i].gt]=0;
        } //if
} //solve
int main()
{
    int T=1;
    //cin>>T;
    FORT(t,0,T) solve();
    return 0;
}