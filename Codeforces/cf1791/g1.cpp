#include <bits/stdc++.h>
using namespace std;

struct node
{
	int x, id;
} c[200005];

int n, m, tmp;

bool cmp(node a, node b)
{
	return a.x+a.id <= b.x+b.id;
}

void solve()
{
	memset(c, 0, sizeof(c));
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> tmp;
		c[i].x = tmp;
		c[i].id = i;
	}
	sort(c + 1, c + n + 1, cmp);
	//for (int i = 1; i <= n; i ++ )
	{
		//cout << c[i].x << " " << c[i].id << endl;
	}
	int i = 0;
	while (m >= 0 && i <= n)
	{
		i ++ ;
		m = m - c[i].x - c[i].id;
	}
	cout << i - 1 << endl;
	return ;
}

int main()
{
	int t;
	cin >> t;
	while (t -- )
		solve();
	return 0;
}
