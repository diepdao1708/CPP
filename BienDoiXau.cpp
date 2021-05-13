
// // A Naive recursive C++ program to find minimum number
// // operations to convert str1 to str2
// #include <bits/stdc++.h>
// using namespace std;
 
// // Utility function to find minimum of three numbers
// int min(int x, int y, int z) { return min(min(x, y), z); }
 
// int editDist(string str1, string str2, int m, int n)
// {
//     // If first string is empty, the only option is to
//     // insert all characters of second string into first
//     if (m == 0)
//         return n;
 
//     // If second string is empty, the only option is to
//     // remove all characters of first string
//     if (n == 0)
//         return m;
 
//     // If last characters of two strings are same, nothing
//     // much to do. Ignore last characters and get count for
//     // remaining strings.
//     if (str1[m - 1] == str2[n - 1])
//         return editDist(str1, str2, m - 1, n - 1);
 
//     // If last characters are not same, consider all three
//     // operations on last character of first string,
//     // recursively compute minimum cost for all three
//     // operations and take minimum of three values.
//     return 1
//            + min(editDist(str1, str2, m, n - 1), // Insert
//                  editDist(str1, str2, m - 1, n), // Remove
//                  editDist(str1, str2, m - 1,
//                           n - 1) // Replace
//              );
// }
 
// // Driver code
// int main()
// {
//     // your code goes here
//     string str1 = "sunday";
//     string str2 = "saturday";
 
//     cout << editDist(str1, str2, str1.length(),
//                      str2.length());
 
//     return 0;
// }
// -----------------------------
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
int min(int x, int y, int z) { return min(min(x, y), z); }
int bd(string str1, string str2, int m, int n){
	int dp[m+1][n+1];
	for(int i=0; i<=m; i++){
		for(int j=0; j<=n; j++){
			if(i==0) dp[i][j]=j;
			else if(j==0) dp[i][j]=i;
			else if(str1[i-1]==str2[j-1]) dp[i][j] = dp[i - 1][j - 1];
			else dp[i][j]=1+min(dp[i][j-1], dp[i-1][j], dp[i-1][j-1]);
		}
	}
	return dp[m][n];
}
void Run()
{
	string str1, str2; cin>>str1>>str2;
	cout<<bd(str1, str2, str1.length(), str2.length())<<endl;
}
int main()
{
	int T=1;
	cin>>T;
	while(T--) Run();
	return 0;
}