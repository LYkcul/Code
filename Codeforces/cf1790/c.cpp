#include <bits/stdc++.h>
using namespace std;

int n;
int a[105][105];
int v1[105];

void solve()
{	memset(a, 0, sizeof(a));
	memset(v1, 0, sizeof(v1));
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = 1; j < n; j ++ )
		{
			cin >> a[i][j];
		}
	}
	bool f = 0;
	for (int i = 1; i <= n; i ++ )
	{
		if (v1[a[i][1]] && !f)
		{
			cout << a[i][1] << " ";
			f = 1;
		}
		v1[a[i][1]] ++ ;
	}
	for (int i = 1; i <= n; i ++ )
	{
		if (v1[a[i][1]] == 1)
		{
			for (int j = 1; j < n; j ++ )
				cout << a[i][j] << " ";
			break;
		}
	}
	cout << "\n";
	return ;
}

int main()
{
	int T; cin >> T;
	while (T -- )	solve();
	return 0;
}
