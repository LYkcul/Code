#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int n, c;
LL tmp;

void solve()
{
	scanf("%d", &n);
	for (LL i = 110000000; i <= 999999999; i ++ )
	{
		tmp ++ ;
		if (tmp > 110000000)	tmp = tmp - 1 + 110000000;
		if (i / 100000000 != i / 10000000 % 10)	continue;
		if (i / 10000 % 10 != i / 1000 % 10)	continue;
		if (i / 100 % 10 != i % 10)	continue;
		c ++ ;
		if (c == n)
		{
			printf("%lld\n", i);
			return ;
		}
	}
}

int main()
{
	solve();
	return 0;
}
