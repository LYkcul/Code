#include <bits/stdc++.h>
using namespace std;

int n;
int a[100005], b, c[100005];
int r1, r2;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i ++ )
	{
		cin >> b;
		a[i] -= b;
	}
    for (int i = 1; i <= n; i ++ )
        c[i] = a[i] - a[i - 1];
	for (int i = 1; i <= n; i ++ )
	{
		if (c[i] > 0)	r1 += c[i];
		else	r2 += c[i];
	}
	cout << max(r1, -1 * r2);
	return 0;
}
