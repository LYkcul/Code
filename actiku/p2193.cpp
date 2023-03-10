#include <bits/stdc++.h>
using namespace std;

const int N = 205;

int n, m;
int mp[N][N];
int f[N][N];

int dfs(int x, int y)
{
	if (f[x][y] != -1)	return f[x][y];
	if (x < 1 || x > m || y < 1 || y > m)	return 0;
	return f[x][y] = max(dfs(x - 1, y) + mp[x - 1][y], max(dfs(x - 1, y - 1) + mp[x - 1][y - 1], dfs(x - 1, y + 1) + mp[x - 1][y + 1]));
}

int main()
{
	memset(f, -1, sizeof(f));
	cin >> m >> n;
	for (int i = 1; i <= m; i ++ )
	{
		for (int j = 1; j <= n; j ++ )
		{
			cin >> mp[i][j];
		}
	}
	cout << max(dfs(n, m / 2 + 1) + mp[n][m / 2 + 1], max(dfs(n, m / 2) + mp[n][m / 2], dfs(n, m / 2 + 2) + mp[n][m / 2 + 2]));
	return 0;
}
