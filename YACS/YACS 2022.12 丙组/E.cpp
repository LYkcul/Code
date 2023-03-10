#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;
int a[100005];
int c[100005];
int res;

signed main()
{	
	scanf("%lld", &n);
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%lld", &a[i]);
	}
	for (int i = 1; i <= n; i ++ )  c[i] = a[i + 1] - a[i];
   	int cnt = 0, tmp = c[1];
	for (int i = 1; i <= n; i ++ )
   	{
   		if (c[i] == tmp)
   		{
   			cnt ++ ;
   		}
		else
		{
			res += cnt * (cnt - 1) / 2;
			cnt = 1;
			tmp = c[i];
		}
	}
	printf("%lld", res);
	return 0;
}

