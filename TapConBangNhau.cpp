#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
const int N = 200005;
using namespace std;
int n;
int a[10000];
void Solve()
{
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 1)   cout << "NO";
    else
    {
        int s = sum / 2;
        int L[N] = {0};
        for (int i = 0; i <= N; i++)  L[i] = 0;
        L[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int t = s; t >= a[i]; t--)
            {
                if (L[t] == 0 && L[t - a[i]] == 1)  L[t] = 1;
            }
        }
        if (L[s] == 1) cout << "YES";
        else cout << "NO";
    }
    cout << endl;
}
int main() 
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        Solve();
    }
    return 0;
}