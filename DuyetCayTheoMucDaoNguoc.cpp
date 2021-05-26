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
node* newNode(int data){
    node* tmp = new node();
    tmp->data = data;
    tmp->left = tmp ->right = NULL;
    return tmp;
}
node* input(){
    int n; cin>>n;
    node* root = NULL;
    map<int, node*> dd;
    for(int i=0; i<n; i++){
        int u, v; char c;
        cin>>u>>v>>c;
        if(dd.find(u) == dd.end()){
            node* tmp = newNode(u);
            dd[u] = tmp;
            if(root == NULL) root = tmp;
        }
        node* Node = dd[u];
        node* ans = newNode(v);
        if(c == 'L') Node->left = ans;
        else Node->right = ans;
        dd[v] = ans;
    }
    return root;
}

void Print(node* root){
    vector<int> kq;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        if(q.front() == NULL){
            q.pop();
            continue;
        }
        kq.push_back(q.front()->data);
        //cout<<q.front()->data<<' ';
        q.push(q.front()->right);
        q.push(q.front()->left);
        
        q.pop();
    }
    for(int i=kq.size()-1; i>=0; i--) cout<<kq[i]<<' ';
}
void Run()
{
    node* root = input();
    Print(root);
    cout<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}