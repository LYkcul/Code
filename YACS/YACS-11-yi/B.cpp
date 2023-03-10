#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int n, q;
long long a[200005];
char op;
int x,y;

int main()
{
	cin >> n >> q;
	while (q -- )
	{
		cin >> op;
		if (op == '+')
		{
			cin >> x >> y;
			a[x] = (a[x] % mod + y % mod) % mod;
		}
		else if (op == '*')
		{
			cin >> x;
			for (int i = 1; i <= n; i ++ )
				a[i] = a[i] % mod * x % mod;
		}
	}
	for (int i = 1; i <= n; i ++ )	cout << a[i] % mod << " "; 
	cout << endl;
	return 0;
}

