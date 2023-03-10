#include <bits/stdc++.h>
using namespace std;

int h, w, sx, sy;
int n, q, rx, ry;
char d;
int l;

map<int, set<int> > r1;
map<int, set<int> > r2;

void solve()
{
	cin >> h >> w >> sx >> sy;
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> rx >> ry;
		r1[rx].insert(ry);
		r2[ry].insert(rx);
	}
	cin >> q;
	while (q -- )
	{
		r1[sx].insert(0); r1[sx].insert(w + 1);
		r2[sy].insert(0); r2[sy].insert(h + 1);
		int tx = sx, ty = sy;
		cin >> d >> l;
		if (d == 'L')
		{
			ty = *--r1[sx].lower_bound(sy);
			if (sy - ty - 1 >= l)	sy -= l;
			else	sy = ty + 1;
		}
		else if (d == 'R')
		{	
			ty = *r1[sx].upper_bound(sy);
			if (ty - sy - 1 >= l)	sy += l;
			else	sy = ty - 1;
		}
		else if (d == 'U')
		{
			tx = *--r2[sy].lower_bound(sx);
			if (sx - tx - 1 >= l)	sx -= l;
			else	sx = tx + 1;
		}
		else if (d == 'D')
		{
			tx = *r2[sy].upper_bound(sx);
			if (tx - sx - 1 >= l)	sx += l;
			else	sx = tx - 1;
		}
		cout << sx << " " << sy << "\n";
	}
}

int main()
{
	solve();
	return 0;
}
