#include <bits/stdc++.h>
using namespace std;

inline int read()
{
	int s = 0, w = 1; char ch = getchar();
	while (ch < '0' || ch > '9') {if (ch == '-') w = -1; ch = getchar();}
	while (ch >= '0' && ch <= '9') {s = (s << 3) + (s << 1) + (ch ^ 48); ch = getchar();}
	return s * w;
}

const int N = 5e5 + 10;

int n;
string op;
int x, c;
int Point;
map<int, int> val;
int k[N], m[N];

void solve()
{
	n = read();
	while (n -- )
	{
		cin >> op;
		if (op == "ADD")
		{
				x = read();
				k[++c] = Point;
				Point = c;
				m[c] = x;
		}
		else if (op == "DELETE")
		{
				Point = k[Point];
		}
		else if (op == "SAVE") 
		{
				x = read();
				val[x] = Point;
		}
		else
		{
				x = read();
			Point = val[x];
		}
		if (Point <= 0)	cout << "-1 ";
		else	cout << m[Point] << " ";
	}
}

int main()
{
		int _ = 1;
		while (_ -- )
				solve();
		return 0;
}
