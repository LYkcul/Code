#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int n, k;
string s;

int f(string s)
{
	int res = 0;
	for (int i = 0; i < s.length(); i ++ )
		res += 11 * int(s[i] - '0');
	return res - (s[0] - '0') - 10 * (s[s.length() - 1] - '0');
}

void solve()
{
	cin >> n >> k >> s;
	int cnt = 0;
	for (char c : s)
		if (c == '1')	cnt ++ ;
	if (cnt == 0)
	{
		cout << 0 << "\n";
		return ;
	}
	int L = 0, R = n - 1;
	while (s[L] == '0')	L ++ ;
	while (s[R] == '0')	R -- ;
	if (L < R)
	{
		if (L - 1 - R + n <= k)
		{
			swap(s[0], s[L]);
			swap(s[R], s[n - 1]);
			cout << f(s) << "\n";
			return ;
		}
	}
	if (n - 1 - R <= k)
	{
		swap(s[R], s[n - 1]);
		cout << f(s) << "\n";
		return ;
	}
	if (L <= k)
	{
		swap(s[L], s[0]);
		cout << f(s) << "\n";
		return ;
	}
	cout << f(s) << "\n";
}

int main()
{
	int T; cin >> T;
	while (T -- )	solve();
	return 0;
}
