#include<bits/stdc++.h>
using namespace std;
#define N 100005
int n, a[N], F[N];
int m, b[N];
int main()
{
    while (scanf("%d", &a[n+1]) > 0) n++;
   
    for (int i=1; i<=n; i++) {
        F[i] = lower_bound(b+1, b+m+1, a[i]) - b;
        m = max(m, F[i]);
        b[F[i]] = a[i];
    }
    int Expected = m;
    vector<int> T;
    for (int i=n; i>=1; i--) {
        if (F[i]==Expected) {
            T.push_back(a[i]);
            Expected--;
        }
    }
    for (int i=T.size()-1; i>=0; i--)
    printf("%d ", T[i]);
    return 0;
}