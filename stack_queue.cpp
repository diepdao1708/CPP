/*
#include<iostream>
#include<stack>
using namespace std;
// ứng dụng:
//- duyện đồ thị: theo chiều sâu
//- khử đệ quy
//- đảo xâu, tìm xâu nhị phân
// 
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    stack<int> st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int tmp;
        cin<<tmp;
        st.push(tmp);
    }
    while (!st.empty())
    {
        cout<<st.top()<<' ';
        st.pop();
    }
    
    return 0;
}
*/
/*
#include<iostream>
#include<queue>
// duyện đồ thị: theo chiều rộng
// deque: kiểm soát cả hai đầu
using namespace std;
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    queue<int> q;
    for(int i=0; i<5; i++)
    {
        int tmp;
        cin>>tmp;
        q.push(tmp);
    }
    while(!q.empty())
    {
        cout<<q.front()<<' ';
        q.pop();
    }
    return 0;
}
*/
//---------------------
//PRIORITY_QUEUE
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    priority_queue<int> q;
    for(int i=0; i<5; i++)
    {
        int tmp;
        cin>>tmp;
        q.push(tmp);
    }
    while(q.size())
    {
        cout<<q.top()<<' ';
        q.pop();
    }
    //priority_queue<int, vector<int>, greater<int> > q;
    // greater: lớn hơn
    // equal_to: bằng
    // not_equal_to: không bằng
    // greater_equal: lớn hơn bằng
    // less_equal: nhỏ hơn bằng
    return 0;
}