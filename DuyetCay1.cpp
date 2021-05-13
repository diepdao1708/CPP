#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int Search(int a[], int x, int n){
    for(int i=0; i<n; i++){
        if(a[i] == x) return i;
    }
    return -1;
}

void printPostorder(int in[], int pre[], int n){
    int root = Search(in, pre[0], n);

    if(root != 0)
        printPostorder(in, pre + 1, root);
    
    if(root != n - 1)
        printPostorder(in + root + 1, pre + root + 1, n - root - 1);
    cout<<pre[0]<<' ';
}

void Run()
{
    int n; cin>>n;
    int in[1004], pre[1004];
    for(int i=0; i<n; i++) cin>>in[i];
    for(int i=0; i<n; i++) cin>>pre[i];
    printPostorder(in, pre, n);
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}