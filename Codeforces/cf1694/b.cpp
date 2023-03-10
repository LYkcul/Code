#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

#define int long long

int n;
string s;

void solve()
{
	cin >> n >> s;
	int res = 0;
	s = " " + s;
	for (int i = 1; i <= n; i ++ )
	{
		if (s[i] == s[i - 1])	res ++ ;
		else res += i;
	}
	cout << res << endl;
}

signed main()
{
	int _;
	cin >> _;
	while (_ -- )	solve();
	return 0;
}
