#include <bits/stdc++.h>
using namespace std;

long long n, m;
long long res;

int main()
{
	scanf("%lld%lld", &n, &m);
	if (n == m)
	{
		printf("1");
		return 0;
	}
	while (n && m)
	{
		if (n > m)	n = n - m;
		else	m = m - n;
		res ++ ;
	}
	printf("%lld", res);
	return 0;
}

