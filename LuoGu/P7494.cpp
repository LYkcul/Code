#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int n, m;
    cin >> n >> m;
    int c = 1, ans = 0;
    while (c < n)
    {
        if (c <= m)
        {
            c *= 3;
            ans ++ ;
        }
        else
        {
            int tmp = n - c;
            ans += tmp / (2 * m);
            if (tmp % (2 * m) != 0)
                ans ++ ;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}