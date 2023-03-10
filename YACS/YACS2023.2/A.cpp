#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int main()
{
	cin >> a >> b >> c;
	int i = a;
	for (i = a; i <= b; i ++ )
	{
		if (i % c == 0) break;
	}
	int t = b - a - i + a;
	cout << t / c + 1;
	return 0;
}

