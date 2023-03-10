#include <bits/stdc++.h>
using namespace std;

int t;
int a, b;

void solve()
{
	cin >> a >> b;
	if (a > b)	
	{
		for (int i = 1; i <= b; i ++ )	cout << "10";
		cout << string(a - b, '0');
	}
	else
	{
		for (int i = 1; i <= a; i ++ )	cout << "10";
		cout << string(b - a, '1');
	}
	cout << "\n";
}

int main()
{
	cin >> t;
	while (t -- )	solve();
	return 0;
}
