#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#define ll long long
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* newNode(int data)
{
    node* tmp = new node();
    tmp -> data = data;
    tmp -> left = tmp -> right = NULL;
    return tmp;
};

bool isFullTree(node* root){
    if(root == NULL){
        return true;
    }
    if(root->left == NULL && root->right ==NULL){
        return true;
    }
    if((root->left)&&(root->right)){
        return(isFullTree(root->left) && isFullTree(root->right));
    }
    return false;
}

int countLeaf(node* root)
{
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    else
        return countLeaf(root->right) + countLeaf(root->left); 
}

void Run()
{
    int n;
    cin>>n;
    node *root = NULL;
    map<int, node*> dd;
    for(int i=0; i<n; i++){
        int u, v; char x;
        cin>>u>>v>>x;

        if(dd.find(u) == dd.end()){
            node* tmp = newNode(u);
            dd[u] = tmp;
            if(root == NULL) root = tmp;
        }

        node* Node = dd[u];
        node* ans = newNode(v);
        if(x == 'L') Node->left = ans;
        else Node->right = ans;
        dd[v] = ans;
    }
    if(isFullTree(root) && (countLeaf(root->left) == countLeaf(root->right))) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}