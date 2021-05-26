#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#define ll long long
using namespace std;
void Run()
{
    int n; cin>>n;
    set<int> a;
    vector<int> res;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        res.push_back(x);
        a.insert(x);
    }
    int ii=0;
    for(set<int>::iterator it = a.begin(); it !=a.end(); it++){
        if(*it != res[ii]){
            cout<<"0"<<endl;
            return;
        }
        ii++;
    }
    cout<<"1";
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}