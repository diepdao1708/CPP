#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
string s;
void Run()
{
    cin>>s;
    stack<int> st;
    st.push(-1);
    int sum = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '(') st.push(i);
        else
        {
            st.pop();
            if(st.size()>0) 
            {
                sum = max(sum, i - st.top());
            }
            if(st.size()==0) st.push(i); 
        }
        
    }
    cout<<sum<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}