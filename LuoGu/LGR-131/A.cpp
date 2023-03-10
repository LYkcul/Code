#include <bits/stdc++.h>
using namespace std;

long long n;

void solve()
{
	scanf("%lld", &n);
	if (n % 2 == 0)
	{
		cout << "No\n";
	}
	else
	{
		cout << "Yes\n";
	}
}

int main()
{
	int t;
	cin >> t;
	while (t -- ) solve();
	return 0;
}

