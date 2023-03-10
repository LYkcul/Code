#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void solve()
{
	int sum = 0;
	cin >> n >> s;
	int L = 0, R = n - 1;
	while (s[L] != s[R] && L < R)
	{
		L ++ , R -- ;
		sum += 2;
	}
	cout << n - sum << endl;
	return ;
}

int main()
{
	int T; cin >> T;
	while (T -- )	solve();
	return 0;
}
