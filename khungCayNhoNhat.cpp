#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
using namespace std;
vector<int> Father;
vector<pair<int,pair<int,int> > >  D;
int Get_Root(int u)
{
    if (Father[u]<0) return u;
    return Get_Root(Father[u]);
}
void Union(int r1,int r2)
{
    if (r1<r2) 
    {
        Father[r1]+=Father[r2];
        Father[r2]=r1;
    }
    else
    {
        Father[r2]+=Father[r1];
        Father[r1]=r2;
    }
}
int main()
{
    int dinh,canh;
    cin>>dinh>>canh;
    Father.resize(dinh+1,-1);
    for(int i=0;i<canh;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        D.push_back(mp(c,mp(a,b)));
    }
    sort(D.begin(),D.end());
    int cost=0;
    for(int i=0;i<D.size();i++)
    {
        int r1=Get_Root(D[i].S.F),r2=Get_Root(D[i].S.S);
        if (r1!=r2)
        {
            cost+=D[i].F;
            cout<<D[i].S.F<<"->"<<D[i].S.S<<endl;
            Union(r1,r2);
        }
    }
    cout<<"cost: "<<cost<<endl;

    return 0;
}#include<bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
using namespace std;
vector<int> Father;
vector<pair<int,pair<int,int> > >  D;
int Get_Root(int u)
{
    if (Father[u]<0) return u;
    return Get_Root(Father[u]);
}
void Union(int r1,int r2)
{
    if (r1<r2) 
    {
        Father[r1]+=Father[r2];
        Father[r2]=r1;
    }
    else
    {
        Father[r2]+=Father[r1];
        Father[r1]=r2;
    }
}
int main()
{
    int dinh,canh;
    cin>>dinh>>canh;
    Father.resize(dinh+1,-1);
    for(int i=0;i<canh;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        D.push_back(mp(c,mp(a,b)));
    }
    sort(D.begin(),D.end());
    int cost=0;
    for(int i=0;i<D.size();i++)
    {
        int r1=Get_Root(D[i].S.F),r2=Get_Root(D[i].S.S);
        if (r1!=r2)
        {
            cost+=D[i].F;
            cout<<D[i].S.F<<"->"<<D[i].S.S<<endl;
            Union(r1,r2);
        }
    }
    cout<<"cost: "<<cost<<endl;

    return 0;
}