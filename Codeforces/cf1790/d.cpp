#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

int n, a[N], b[N];
int res = 0;

void solve()
{
	res = 0;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i ++ )
		b[i] = a[i] - a[i - 1];
	for (int i = 1; i <= n; i ++ )
		cout << b[i] << " ";
	cout << endl;
	return ;
}

int main()
{
	int T;
	cin >> T;
	while (T -- )	solve();
	return 0;
}
