    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios::sync_with_stdio(false); 
        cin.tie(0);
        cout.tie(0);
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            long  long s=0;
            int check=0;
            priority_queue<int> q;
            priority_queue<int, vector<int>, greater<int> > q1, q2;
            for(int i=0; i<n; i++)
            {
                int so;
                cin>>so;
                s=s+so;
                if(so!=0) check=1;
                if(so%3==0) q.push(so);
                if(so%3==1) q1.push(so);
                if(so%3==2) q2.push(so);
            }
            int ok=1;
            if(check==0) cout<<0;
            else
            {
                if(s%3==0) 
                {
                    while(q1.size()>0)
                    {
                        int res=q1.top();
                        q1.pop();
                        q.push(res);
                    }
                    while(q2.size()>0)
                    {
                        int res=q2.top();
                        q2.pop();
                        q.push(res);
                    }
                    while(q.size())
                    {
                        cout<<q.top();
                        q.pop();
                    }
                }
                else
                {
                    if(s%3==1)
                    {
                        if(q1.size()>0) q1.pop();
                        else 
                        {
                            if(q2.size()>=2) 
                            {
                                q2.pop();
                                q2.pop();
                                ok=1;
                            } 
                            else ok=2;
                        }
                    }
                    if(s%3==2)
                    {
                        if(q2.size()>0) q2.pop();
                        else 
                        {
                            if(q1.size()>=2) 
                            {
                                q1.pop();
                                q1.pop();
                                ok=1;
                            } 
                            else ok=2;
                        }
                    }
                    while(q1.size()>0)
                    {
                        int res=q1.top();
                        q1.pop();
                        q.push(res);
                    }
                    while(q2.size()>0)
                    {
                        int res=q2.top();
                        q2.pop();
                        q.push(res);
                    }
                    if(ok!=1||q.size()==0) cout<<-1;
                    else
                    {
                        if(q.top()==0) cout<<0;
                        else
                        {
                            while(q.size()) 
                            {
                                cout<<q.top();
                                q.pop();
                            }
                        }
                    }
                }
                
            }
            cout<<endl;
            
            
            
     
        }
        return 0;
    } 