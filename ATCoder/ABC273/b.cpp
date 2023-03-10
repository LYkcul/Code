#include <bits/stdc++.h>
using namespace std;

#define int long long

int x, k;

void solve()
{
	cin >> x >> k;
	int sum = 1;
	for (int i = 1; i <= k ; i ++ )
	{
		sum *= 10;
		int ta = floor(x * 1. / sum) * sum, tb = ceil(x * 1. / sum) * sum;
		x = (abs(ta - x) >= abs(tb - x)) ? tb : ta;
	}
	cout << x << endl;
}

signed main()
{
	solve();
	return 0;
}
