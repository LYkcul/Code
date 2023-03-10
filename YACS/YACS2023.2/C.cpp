#include <bits/stdc++.h>
using namespace std;

struct node
{
	int l, r;
} a[100005];

int n;
int al = 0x3f3f3f3f, ar = -0x3f3f3f3f;

bool cmp(node x, node y)
{
	if (x.l == y.l)	return x.r < y.r;
	return x.l < y.l;
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i].l >> a[i].r;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i =1; i <= n; i++)
	{
		if (a[i].l > ar && i > 1)
		{
			cout << al << " " << ar << endl;
			al = a[i].l;
			ar = a[i].r;
		}
		else
		{
			al = min(al, a[i].l);
			ar = max(ar, a[i].r);
		}
	}
	cout << al << " " << ar;
	return 0;
}

