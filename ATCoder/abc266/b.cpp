#include <bits/stdc++.h>
using namespace std;

long long n;

int main()
{
	scanf("%lld", &n);
	n %= 998244353;
	if (n < 0) n += 998244353;
	cout << n << endl;
	return 0;	
}
