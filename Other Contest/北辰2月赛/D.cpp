#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100005];

void init()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
}

void solve()
{
	int L, R;
	for (int i = 1; i <= n; i ++ )
	{
		if (a[i] <= 0 && a[i + 1] >= 0)
		{
			L = i;
			R = i + 1;
			break;
		}
	}
	int sum = 0, res = 0, nowx = 0;
	while (sum <= k && L >= 0 && R <= n + 1)
	{
		int t1 = abs(nowx - a[L]);
		int t2 = abs(nowx - a[R]);
		if (t1 <= t2)
		{
			sum ++ ;
			res += t1;
			nowx = a[L];
			L -- ;
		}
		else
		{
			sum ++ ;
			res += t2;
			nowx = a[R];
			R ++ ;
		}
	}
	cout << res << endl;
	return ;
}

int main()
{
	init();
	solve();
	return 0;
}

