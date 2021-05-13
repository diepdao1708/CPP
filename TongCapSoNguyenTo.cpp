#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;
bool nt(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}
void Run()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n/2; i++)
    {
        if (nt(i) == 1 && nt(n - i) == 1) 
        {
            cout << i << ' ' << n - i;
            return;
        }
    }
    cout<<"-1";
}
int main()
{
	int t;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		Run();
		cout << endl;
	}
 
 	return 0;
}