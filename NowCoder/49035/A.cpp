#include <bits/stdc++.h>
using namespace std;
//0分TLE
int t ,m;
int n;

int main()
{
    scanf("%d%d", &t, &m);
    while (t -- )
    {
        scanf("%d", &n);
        if (n <= 3)
        {
            long long sum = 1, res = 1;
            for (int i = 1; i <= n; i ++ )
                sum = sum % m * i % m;
            for (int i = 1; i <= sum; i ++ )
                res = res % m * i % m;
            printf("%lld\n", res);
        }
        else
        {
            
        }
    }
    return 0;
}