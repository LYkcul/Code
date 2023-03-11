#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

long long a, b;
long long p;
long long res1, res2;
long long f[1005];

int main()
{
    cin >> a >> b >> p;
    if (a <= p && b <= p)
    {
        for (int i = 1; i <= a; i ++ )
        {
            for (int j = 1; j <= b; j ++ )
            {
                res1 += i % p * j % p;
                res1 %= mod;
            }
        }
        cout << res1 << endl;
        return 0;
    }
    long long tmp = 0;
    for (int i = 1; i <= p; i ++ )
    {
        for (int j = 1; j <= p; j ++ )
        {
            tmp += i % p * j % p;
            tmp %= mod;
        }
        f[i] = tmp % mod;
    }   
    tmp = tmp % mod * (a / p) % mod * (b / p) % mod;
    for (int i = 1; i <= (a % p); i ++ )
    {
        for (int j = 1; j <= p; j ++ )
        {
            res1 += i % p * j % p;
            res1 %= mod;
        }
    }
    res1 = res1 % mod * (b / p) % mod;
    for (int i = 1; i <= (a % p); i ++ )
    {
        for (int j = 1; j <= (b % p); j ++ )
        {
            res1 += i % p * j % p;
            res1 %= mod;
        }
    }
    res2 += f[b % p] % mod * (a / p) % mod;
    cout << (res1 % mod + tmp % mod + res2 % mod) % mod << endl;
    return 0;
}