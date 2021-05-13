#include<stdio.h>
#include<math.h>
 
int main()
{
	unsigned long long n, mol=1e9+7;
	scanf("%llu", &n);
	unsigned long long s0 = 0, s1 = 1, s = 1;
	if (n == 0) {
		printf ("0");
		return 0;
		}
	if (n == 1) {
		printf ("1");
		return 0;
		}
	if (n >= 1) {
		for (unsigned long long i = 2; i <= n; i++){
			s = (s0%mol + s1%mol) %mol;
			s0 = s1;
			s1 = s;
		}
	}
	printf("%llu", s);
	return 0;
}
 