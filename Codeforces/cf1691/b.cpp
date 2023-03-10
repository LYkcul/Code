#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
const int N = 1e5 + 10;

int n, a[N];
int res[N];

void solve()
{
	memset(res, 0, sizeof(res));
	memset(a, 0, sizeof(a));
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
		res[i] = i;
	}
	for (int i = 1; i <= n; i ++ )
	{
		if (a[i] == a[i - 1])
		{
			swap(res[i], res[i - 1]);
			swap(a[i], a[i - 1]);
		}
		if (a[i] != a[i - 1] && a[i] != a[i + 1])
		{
			cout << "-1\n";
			return ;
		}
	}
	for (int i = 1; i <= n; i ++ )	cout << res[i] << " ";
	cout << "\n";
}

int main()
{
	int _;
	cin >> _;
	while (_ -- )	solve();
	return 0;
}
