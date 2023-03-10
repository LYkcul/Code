#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int x, y;

void solve()
{
	x = y = 0;
	cin >> n >> s;
	bool f = 0;
	for (int i = 0; i < n; i ++ )
	{
		if (s[i] == 'L')
			x -- ;
		else if (s[i] == 'R')
			x ++ ;
		else if (s[i] == 'U')
			y ++ ;
		else if (s[i] == 'D')
			y -- ;
		if (x == 1 && y == 1)
		{
			cout << "YES\n";
			f = 1;
			break;
		}
	}
	if (!f)
	{
		cout << "NO\n";
	}
	return ;
}

int main()
{
	int T;
	cin >> T;
	while (T -- )
		solve();
	return 0;
}
