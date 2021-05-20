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
        root->data = data;
        root->left = root->right = NULL;
        return root;
    }
    if(data < root->data)
        root->left = newNode(root->left, data);
    else if(data > root->data)
        root->right = newNode(root->right, data);
    return root;    
}

void NLR(node* root){
    if(root){
        cout<<root->data<<' ';
        NLR(root->left);
        NLR(root->right);
    }
}

void LNR(node* root){
    if(root){
        LNR(root->left);
        cout<<root->data<<' ';
        LNR(root->right);
    }
}

void Run()
{
    int n; cin>>n;
    node* root = NULL;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        root = newNode(root, a);
    }
    NLR(root);
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}