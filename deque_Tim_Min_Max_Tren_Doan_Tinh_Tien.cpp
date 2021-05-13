
#include<bits/stdc++.h>
using namespace std;
void solve1()
{
	int n;
    cin>>n;
    vector<int> a(n),L(n),R(n);
    deque<int> dq;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
            while (!dq.empty()&&a[dq.back()]>=a[i]) dq.pop_back();
            L[i]=(dq.empty())? 0: dq.back()+1;
            dq.push_back(i);
    }
    dq.clear();
    for(int i=n-1;i>=0;i--)
    {
            while (!dq.empty()&&a[dq.back()]>=a[i]) dq.pop_back();
            R[i]=(dq.empty())? n-1: dq.back()-1;
            dq.push_back(i);
    }
    for(int i=0;i<n;i++) cout<<i<<' '<<a[i]<<' '<<L[i]<<' '<<R[i]<<endl;
}
void solve()
{
        int n;
        cin>>n;
        int a[1000]={};
        int trai[1000]={};
        int phai[1000]={};
        for(int i=1; i<=n; i++) cin>>a[i];
        a[0]=a[n+1]=0;
        stack<int> tmp1;
        tmp1.push(0);
        for(int i=1; i<=n; i++)
        {
                while(tmp1.size()!=0 && a[tmp1.top()]>=a[i]) tmp1.pop();
                if(tmp1.size()!=0) trai[i]=tmp1.top();
                else trai[i]=0;
                tmp1.push(i);
        }
        stack<int> tmp2;
        tmp2.push(n+1);
        for(int i=n; i>=1; i--)
        {
                while(tmp2.size()!=0 && a[tmp2.top()]>=a[i]) tmp2.pop();
                if(tmp2.size()!=0) phai[i]=tmp2.top();
                else phai[i]=n+1;
                tmp2.push(i);
        }
        for(int i=1; i<=n; i++) cout<<trai[i]<<' '<<phai[i]<<'\n';
}
int main()
{
        ios::sync_with_stdio(false); 
        cin.tie(0);
        cout.tie(0);
		solve();
        return 0;
}