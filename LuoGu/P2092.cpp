#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll Q;
int cnt = 0, a[1000005];

int main()
{
	cin >> Q;
	for (int i = 2; i * i <= Q; i ++ )
	{
		while (Q % i == 0)
		{
			a[ ++ cnt] = i;
			Q /= i;
		}
	}	
	if (Q != 1)	a[ ++ cnt] = Q;
	if (cnt == 1)
	{
		cout << 1 << endl << 0;
	}
	else if (cnt == 2)
	{
		cout << 2;
	}
	else
	{
		cout << 1 << endl << a[1] * a[2];
	}
	return 0;
}
