#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int n, a[N];
int x, y;	//分别为偶数元素个数和奇数元素个数

void solve()
{
	x = y = 0;
	cin >> n;
	for (int i = 1; i <= n; i ++ )	cin >> a[i];
	for (int i = 1; i <= n; i ++ )
	{
		if (a[i] & 1)	y ++ ;
		else x ++ ;
	}
	cout << min(x, y) << endl;
}

int main()
{
	int _;
	cin >> _;
	while (_ -- )	solve();
	return 0;
}
