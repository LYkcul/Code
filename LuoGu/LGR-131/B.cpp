#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 10;

int n, m;
int a[maxn];
int res = 0x3f3f3f3f;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n ;i ++ )
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n - m + 1; i ++ )
	{
		res = min(res, a[i + m - 1] - a[i]);
	}
	cout << res << endl;
	return 0;
}

