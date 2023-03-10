#include <bits/stdc++.h>
using namespace std;

int n;
int a[100005];
int x;

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	sort(a + 1, a + n + 1);
	if (n % 2 != 0 && a[n / 2 + 1] == x)
	{
		cout << 0;
		return 0;
	}
	int cnt = 0;
	for (int i = 1; i <= n; i ++ )
	{
		if (a[i] == x)	cnt ++ ;
	}
	sort(a + 1, a + n + 1);
	int i = 1, j = n;
	while (a[i] < x)	i ++ ;
	while (a[j] > x)	j -- ;
	//cout << i << " " << j << "\n";
	if (!cnt)
	{
		int tmp = n - j;
		cout << abs(tmp - j) + 1;
	}
	else
	{
		int tmp1 = i - 1;
		int tmp2 = n - j;
		int tmp3 = abs(tmp1 - tmp2) - cnt;
		cout << tmp3 + 1; 
	}
	return 0;
}
//1 4 6 7
//3
//2 1

//1 2 6 7
//3
//3 2

//1 2 2 3 7
//3
//4 4

//1 2 2 3 3 7
//3
//4 5
