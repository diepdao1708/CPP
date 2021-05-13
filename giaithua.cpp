#include<bits/stdc++.h>

using namespace std;

unsigned long long gt(int n)
{
    if(n==0) return 1;
    return gt(n-1)*n;
}
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        cout<<gt(n)<<endl;
    }
}