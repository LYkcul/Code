#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int c1[205], c2[205];
int res = 0;

void solve()
{
	res = 0;
	memset(c1, 0, sizeof(c1));
	memset(c2, 0, sizeof(c2));
	cin >> n >> s;
	for (int i = 0; i < n; i ++ )
		c1[s[i] - 'a' + 1] ++ ;
	for (int i = 0; i < n; i ++ )
	{
		c1[s[i] - 'a' + 1] -- ;
		c2[s[i] - 'a' + 1] ++ ;
		int s1 = 0, s2 = 0;
		for (int j = 1; j <= 26; j ++ )
		{
			if (c1[j])	s1 ++ ;
			if (c2[j])	s2 ++ ;
		}
		res = max(res, s1 + s2);
	}
	cout << res << endl;
	return ;
}

int main()
{
	int T; cin >> T;
	while (T -- )	solve();
	return 0;
}
