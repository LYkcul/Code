#include <bits/stdc++.h>
using namespace std;

int n, q;
int op, x, y;  
//vector<bool> vis{0};
string s;
long long a[2000005];
long long tmp;

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%lld", &a[i]);
		//vis[i] = 1;
	}
	s = string(n + 5, '1');
	scanf("%d", &q);
	while (q -- )
	{
		scanf("%d%d", &op, &x);
		if (op == 1)
		{
			tmp = x;
			s = string(n + 5, '0');
		}
		else if (op == 2)
		{
			scanf("%d", &y);
			if (s[x] == '0')
			{
				a[x] = tmp + y;
				s[x] = '1';
			}
			else
			{
				a[x] += y;
			}
		}
		else
		{
			if (s[x] == '1')
				printf("%lld\n", a[x]);
			else
				printf("%lld\n", tmp);
		}
	}
	return 0;
}

