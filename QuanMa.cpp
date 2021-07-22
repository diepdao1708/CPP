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
#define iPair pair<int, int>
#define mp make_pair
using namespace std;
const int oo = 1e9;
iPair b[8] =  {mp(-2, -1), mp(-2, 1), mp(-1, -2), mp(-1, 2), mp(1, -2) ,mp(1, 2), mp(2, -1), mp(2, 1)};

bool dd[501][501]={};
map<iPair, iPair> trace;

int kq(iPair u, iPair v){
    int dem = 0;
    while(u!=v)
	{
		v=trace[v];;
        dem++;
    }
    return dem;
}

void bfs(int i, int j, int ii, int jj){
    queue<iPair> q;
    q.push(mp(i, j));
    dd[i][j]=1;
    while(q.size() > 0){
        iPair u = q.front();
        q.pop();
        for(int v=0; v<8; v++){
            iPair x = mp(u.first + b[v].first, u.second + b[v].second);
            if(x.first >= 1 && x.first <= 8 && x.second >= 1 && x.second <= 8 && dd[x.first][x.second]==0){
                dd[x.first][x.second] = 1;
                trace[x] = u;
                if(x.first == ii && x.second == jj) return;
                q.push(x);
            }
        }
    }
}
void Run()
{
    string a, b; cin>>a>>b;
    if(a == b){
        cout<<0<<endl;
        return;
    }
    iPair u, v;
    u.first = a[0] - 'a' + 1;
    u.second = a[1] - '0';
    v.first = b[0] - 'a' + 1;
    v.second = b[1] - '0';
    for(int i=1; i<=8; i++){
        for(int j=1; j<=8; j++){
            dd[i][j] = 0;
        }
    }
    bfs(u.first, u.second, v.first, v.second);
    cout<<kq(u, v)<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    while(T--) Run();
    return 0;
}