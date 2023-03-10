#include <bits/stdc++.h>
using namespace std;

int n, m, a[105];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
		cin >> a[i];
	if (m >= n)
	{
		for (int i = 1; i <= n; i ++ )
		{
			cout << "0 "; 
		}
		return 0;
	}
	for (int i = m + 1; i <= n; i ++ )
		cout << a[i] << " ";
	for (int i = 1; i <= m; i ++ )
		cout << "0 ";
	return 0;
}

