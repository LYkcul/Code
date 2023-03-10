#include <bits/stdc++.h>
using namespace std;

int n;
int a[500005];
int ares, asum, atmp;

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i ++ )
	{
		atmp = 0;
		int t = a[i];
		while (a[i] == t)
		{
			atmp ++ ;
			i ++ ;
		}
		i -- ;
		ares = max(ares, atmp);
	}
	for (int i = 1; i <= n; i ++ )
	{
		atmp = 0;
		int t = a[i];
		while (a[i] == t)
		{
			atmp ++ ;
			i ++ ;
		}
		i -- ;
		if (atmp == ares)
			asum ++ ;
	}
	cout << ares << " " << asum;
	return 0;
}

