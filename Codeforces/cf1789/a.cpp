#include <bits/stdc++.h>
using namespace std;

int n;
int a[105];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i ++ )
    {
        for (int j = 1; j <= n; j ++ )
        {
            if (__gcd(a[i], a[j]) <= 2)
            {
                puts("Yes");
                return ;
            }
        }
    }
    puts("No");
    return ;
}

int main()
{
    int T; cin >> T;
    while (T -- )
    {
        solve();
    }
    return 0;
}