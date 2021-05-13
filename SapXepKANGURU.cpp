#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
void Run(){
    cin>>n;
    a.clear();
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    int res=n;
    for(int i=n/2-1, j=n-1; i>=0 && j>=n/2; ){
    	if(2*a[i] <= a[j]){
    		i--;
    		j--;
    		res--;
		}
		else i--;
	}
	cout<<res<<endl;
}
int main() {
    int t; cin>>t; while(t--) Run();
	return 0;
}