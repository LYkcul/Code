#include <bits/stdc++.h>
using namespace std;

int a[55];

void solve()
{
	memset(a, 0, sizeof(a));
	int n, s, r;
	cin >> n >> s >> r;
	int maxa = s - r;
	a[n] = maxa;
	int sum = 0;
	while (sum < r)
	{
		for (int i = 1; i < n; i ++ )
		{
			a[i] ++ ;
			sum ++ ;
			if (sum >= r)	break;
		}
	}
	for (int i = 1; i <= n; i ++ )
		cout << a[i] << " ";
	cout << "\n";
}

int main()
{
	int T; cin >> T;
	while (T -- )	solve();
	return 0;
}
