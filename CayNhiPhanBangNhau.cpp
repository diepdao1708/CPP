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

string LNR(node* root)
{
    if(root!=NULL) {
        s1 = s1 + (char)(root->data+'0');
        LNR(root->left); 
        LNR(root->right);
    }
    return s1;
}

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

void Run()
{
    node* root1 = input();
    node* root2 = input();
    s1="";
    string x = LNR(root1);
    s1="";
    string y = LNR(root2);
    
    if(x == y) cout<<"1"<<endl;
    else cout<<"0"<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}