#include <bits/stdc++.h>
using namespace std;

int n; 
unsigned long long sum = 0;

int main()
{
	scanf("%d", &n);
	for (int i = 1; i; i ++ )
	{
		if (sum == n)
		{
			printf("%d", i - 1);
			return 0;
		}
		else if (sum > n)
		{
			printf("%d", i - 2);
			return 0;
		}
		sum += i;
	}
	return 0;
}
