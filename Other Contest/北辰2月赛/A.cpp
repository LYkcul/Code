#include <bits/stdc++.h>
using namespace std;

int n, a[15];

void solve()
{
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i]; 
	}
	for (int i = 1; i <= n; i ++ )
	{
		int sum = 0;
		for (int j = 1; j <= n; j ++ )
		{
			if (i == j)	continue;
			sum += a[j];
		}
		if (sum <= a[i])
		{
			cout << "No\n";
			return ; 
		}
	}
	cout << "Yes\n";
	return ; 
}

int main()
{
	solve();
	return 0;
}

