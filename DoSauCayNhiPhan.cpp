#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
#define ll long long
using namespace std;
const int oo = 1e9;
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
int maxDepth(node* root)
{
    if (root == NULL)
        return 0;
    else
    {
        int lDepth = maxDepth(root->left);
        int rDepth = maxDepth(root->right);
     
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }
}
void Run()
{
    int n; cin>>n;
    node* root = NULL;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        root = newNode(root, x);
    }
    cout<<maxDepth(root) - 1;
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}