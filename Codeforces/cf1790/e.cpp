#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int x;
	cin >> x;
	for (long long i = 1; i <= x; i ++ )
	{
		long long j = 2 * x - i;
		long long t = i ^ j;
		if (t == x)
		{
			cout << i << " " << j << "\n";
			return ;
		}
	}
	cout << -1 << "\n";
	return ;
}

int main()
{
	int T;
	cin >> T;
	while (T -- )	solve();
	return 0;
}
