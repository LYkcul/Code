#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long n, p;
    scanf("%d", &t);
    while (t -- )
    {
        scanf("%lld%d", &n, &p);
        if (p == 1)
        {
            puts("0");
            continue;
        }
        long long ans = n;
        int i = 1;
        while (p <= n)
        {
            if (i & 1)
                ans -= n / p;
            else   
                ans += n / p;
            n /= p;
            i ++ ;
        }
        printf("%lld\n", ans);
    }
    return 0;
}