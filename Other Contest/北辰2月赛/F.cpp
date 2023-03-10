#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;

long long res;

bool check(int x)
{
	for (int i = 2; i * i <= x; i ++ )
		if (x % i == 0)	return 0;
	return 1;
}

int main()
{
	srand(time(NULL));
	int n, m;
	cin >> n >> m;
	if (n == 2)
	{
		long long res = 0;
		for (int i = 1; i <= n; i ++ )
		{
			if (m % i == i)
			{
				res ++ ;
			}
			else if (m % i == 0)
			{
				res ++ ;
				res ++ ;
			}
		}
		cout << res;
	}
	else if (check(m))
	{
		cout << n;
	}
	return 0;
}

