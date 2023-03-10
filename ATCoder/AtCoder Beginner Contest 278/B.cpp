#include <bits/stdc++.h>
using namespace std;

int h, m;

bool check(int x, int y)
{
	int t1 = x % 10;
	int t2 = y / 10;
	int r1 = x / 10 * 10 + t2;
	int r2 = t1 * 10 + y % 10;
	if (r1 >= 0 && r1 <= 23 && r2 >= 0 && r2 <= 59)
		return 1;
	else
		return 0;
}

int main()
{
	cin >> h >> m;
	while (1)
	{
		if (h >= 24)
		{
			h = 0;
		}
		if (m >= 60)
		{
			m = 0;
			h ++ ;
		}
		if (check(h, m))
		{
			if (h >= 24)
			{
				h = 0;
			}
			if (m >= 60)
			{
				m = 0;
				h ++ ;
			}
			cout << h << " " << m;
			return 0;
		}
		m ++ ;
	}
	return 0;
}

