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

string s1, s2;

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


node* input(){
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
    return root;
}

int sum(node *root){
    if(root == NULL) {
        return 0;
    }
    return sum(root->left) + root->data + sum(root->right);
}

int isSumTree(node* root){
    int ls, rs;
    if(root == NULL || root->left == NULL && root->right ==NULL){
        return 1;
    }
    ls = sum(root->left);
    rs = sum(root->right);

    if((root->data == ls+rs) && isSumTree(root->left) && isSumTree(root->right)){
        return 1;
    }
    return 0;
}

void Run()
{
    node* root = input();
    if(isSumTree(root)) cout<<"1"<<endl;
    else cout<<"0"<<endl;
    
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}