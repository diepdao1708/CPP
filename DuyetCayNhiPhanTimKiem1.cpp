#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
node* newNode(node* root, int data){
    if(root == NULL){
        root = new node();
        root->data=data;
        root->left=root->right=NULL;
        return root;
    }
    if(data<root->data){
        root->left=newNode(root->left, data);
    } else if(data>root->data){
        root->right=newNode(root->right, data);
    }
    return root;
}
void LNR(node* root){
    if(root){
        //cout<<root->data<<' ';
        LNR(root->left);
        
        LNR(root->right);
        cout<<root->data<<' ';
    }
}
void Run()
{
    int n;
    cin>>n;
    node* root=NULL;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        root=newNode(root, x);
    }
    LNR(root);
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}