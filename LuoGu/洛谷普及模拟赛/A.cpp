#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[1000005];
int x[1000005], y[1000005];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	while (m -- )
	{
		cin >> x >> y;
		if (x == 0)	continue;
		for (int i = 1; i <= n; i ++ )
		{
			int t = i ^ x;
			if (t == 0)
			{
				a[i] -= y;
			}
		}
	}
	for (int i = 1; i <= n; i ++ )
		cout << a[i] << " ";
	return 0;
}

