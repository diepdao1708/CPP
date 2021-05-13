#include<bits/stdc++.h>
using namespace std;
int n, p, s; 
// p la so nguyen to
// đưa ra tất cả n số nguyên tố tính từ p có tổng bằng s
int f[1001]={};
int dd[1001]={};
//vector<int> F;
void snt()
{
    f[0]=f[1]=0;
    for(int i=2; i<=200; i++) f[i]=1;
    for(int i=2; i<=200; i++)
    {
        if(f[i]==1)
        {
            for(int j=i*2; j<=200; j+=i)
            {
                f[j]=0;
            }
        }
    }
}//snt
vector<vector<int> > res;
void dequi(int dem, int sum, vector<int> pos, int vt)
{
    if(sum>s&&dem>n) return;
    if(sum==s&&dem==n)
    {
        res.push_back(pos);
        return;
    }
    for(int i=vt; i<=s; i++)
    {
        if(f[i]==1&&sum+i<=s&&dd[i]==0) 
        {
            dd[i]=1;
            pos.push_back(i);
            dequi(dem+1, sum+i, pos, i);
            pos.pop_back();
            dd[i]=0;
        } 
    }
}// dequi
void solve()
{
    cin>>n>>p>>s;
    p++;
    res.clear();
    vector<int> pos;
    dequi(0, 0, pos, p);
    
    cout<<res.size()<<'\n';
    for(int i=0; i<res.size(); i++)
    {
        for(int j=0; j<res[i].size(); j++)
        {
            cout<<res[i][j]<<' ';
        }
        cout<<'\n';
    }
    
    //cout<<'\n';
}//solve
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    snt();
    while(t--) 
    {
        solve();
    }
    return 0;
}