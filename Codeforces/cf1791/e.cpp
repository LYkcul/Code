#include <bits/stdc++.h>
using namespace std;

int n;
int a[200005];

void solve()
{
	cin >> n;
	long long sum = 0;
	bool f = 1;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
		if (a[i] < 0)	f = 0;
		sum += a[i];
	}
	if (f)
	{
		cout << sum << endl;
		return ;
	}
	for (int i = 1; i <= n; i ++ )
	{
		if (a[i] < 0)
		{
			if (i == 1)
			{
				if (a[i + 1] < 0)
				{
					a[i] = -a[i];
					a[i + 1] = -a[i + 1];
				}
				else
				{
					if (a[i + 1] <= -a[i])
					{
						a[i] = -a[i];
						a[i + 1] = -a[i + 1];
					}
				}
			}
			else if (i == n)
			{
				if (a[i - 1] < 0)
				{
					a[i] = -a[i];
					a[i - 1] = -a[i - 1];
				}
				else
				{
					if (a[i - 1] <= -a[i])
					{
						a[i] = -a[i];
						a[i - 1] = -a[i - 1];
					}
				}
			}
			else if (a[i - 1] >= 0 && a[i + 1] >= 0)
			{
				if (a[i - 1] > a[i + 1])
				{
					if (-a[i] > a[i - 1])
					{
						a[i] = -a[i];
						a[i - 1] = - a[i - 1];
					}
				}
				else
				{
				    if (-a[i] > a[i + 1])
					{
						a[i] = -a[i];
						a[i + 1] = - a[i + 1];
					}
				}
			}
			else if (a[i - 1] <= 0 && a[i + 1] <= 0)
			{
				a[i] = -a[i];
				if (-a[i - 1] > -a[i + 1])
					a[i - 1] = -a[i - 1];
				else
					a[i + 1] = -a[i + 1];
			}
			else{
				if (a[i + 1] <= 0)
				{
					if (-a[i + 1] > a[i - 1])
					{
						a[i] = -a[i];
						a[i + 1] = -a[i + 1];
					}
				}
				else
				{
					if (-a[i - 1] > a[i + 1])
					{
						a[i] = -a[i];
						a[i - 1] = -a[i - 1];
					}
				}
			}
		}
	}
	sum = 0;
	for (int i = 1; i <= n; i++ )
	{
		sum += a[i];
	}
	cout << sum << endl;
	return ;
}

int main()
{
	int T;
	cin >> T;
	while (T -- )	solve();
	return 0;
}
