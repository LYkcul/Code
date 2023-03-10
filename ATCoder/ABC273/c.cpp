#include <bits/stdc++.h>
using namespace std;

inline int read()
{
	int s = 0, w = 1;
	char c = getchar();
	while (c < '0' || c > '9')	
	{
		if (c == '-')	w = -1;
		c = getchar();
	}
	while (c >= '0' && c <= '9')	
	{
		s = (s << 3) + (s << 1) + (c ^ 48);
		c = getchar();
	}
	return s * w;
}

const int N = 2e5 + 5;

int n, a[N];
set<int> s;
set<int>::iterator it;
map<int, int> mp;
int sum[N]; //前缀和数组
int res[N];

void solve()
{
	n = read();
	for (int i = 1; i <= n; i ++ )
	{
		a[i] = read();
		s.insert(a[i]);
	}
	int t = 1;
	int tn = s.size();
	for (it = s.begin(); it != s.end(); it ++ )
	{
		int tmp = *it;
//		cout << *it << " ";
		mp[tmp] = t ++ ;
	}
//	cout << endl;
//	cout << tn << endl;
	for (int i = 1; i <= n; i ++ )
	{
//		cout << mp[a[i]] << " *";
		sum[i] = sum[i - 1] + tn - mp[a[i]];
//		cout << sum[i] << '\n';
	}
	for (int i = 1; i <= n; i ++ )
		res[sum[i] - sum[i - 1]] ++ ;
	for (int i = 0; i < n; i ++ )
		cout << res[i] << "\n";
}

int main()
{
	int _ = 1;
	while (_ -- )
		solve();
	return 0;
}
