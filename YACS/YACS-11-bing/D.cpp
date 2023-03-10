#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

long long n, m;

inline long long f(long long x, long long y)
{
	long long res = 1;
	for (long long i = 1; i <= x; i ++ )
	{
		res *= y --;
		res %= mod;
		res /= i;
	}
	return res;
}

long long FAst(long long a,long long n){
	long long s = 1 % mod;
	while (n)
	{
		if(n & 1) s = (s * a) % mod;
		a = (a * a) % mod;
		n = n >> 1;
	}
	return s;
}

int main()
{
	scanf("%lld%lld", &n, &m);
	printf("%lld", FAst(m - 1, n - 1) * m % mod);
	return 0;
}
//m, m-1, m-1, m-1......
