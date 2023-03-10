#include <bits/stdc++.h>
using namespace std;

int t;
int n, a, b;

void solve()
{
	cin >> n >> a >> b;
	//if (a == 0 && b == 0)
	{
		long long sum = (1 + n) * n / 2;
		if (a + b > sum)
		{
			cout << "-1\n";
			return ;
		}
		for (int i = 1; i <= n; i ++ )
			cout << i << " ";
		cout << endl;
	}
	//else
	{	}
	return ;
}

int main()
{
	cin >> t;
	while (t -- )	solve();
	return 0;
}
