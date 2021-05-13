#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
void Run()
{
    int n; cin>>n; cin.ignore();
    vector<int> a(n);
    char c;
    for(int i=0; i<n; i++){
        cin>>c;
        if(c == 'X') a[i] = 0;
        else if(c == 'T') a[i] = 1;
        else a[i] = 2;
    }
    vector<int> b = a;
    sort(b.begin(), b.end());
    int kp = 0;
    for(int i=0; i<n; i++){
        if(a[i] == b[i]) continue;
        kp++;
        int k = -1;
        for(int j=i+1; j<n; j++){
            if(a[j] == b[i] && a[i] == b[j]){
                k = j;
                break;
            }
        }
        if(k == -1){
            for(int j=i+1; j<n; j++){
                if(a[j] == b[i] && a[j] != b[j]){
                    k = j;
                    break;
                }
            }
        }
        swap(a[i], a[k]);
    }
    cout<<kp;
}
int main()
{
    int T=1;
    //cin>>T;
    while(T--) Run();
    return 0;
}