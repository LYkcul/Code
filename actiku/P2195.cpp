#include <bits/stdc++.h>
using namespace std;

int dp[505][505];
int a[505];
int n;

int main()
{
    memset(dp, 0x3f3f3f3f, sizeof(dp));
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> a[i];
        dp[i][i] = 1;
    }
    for (int i = 1; i < n; i ++ )
        dp[i][i + 1] = a[i] == a[i + 1] ? 1 : 2;
    for (int len = 3; len <= n; len ++ )
    {
        for (int i = 1; i <= n; i ++ )
        {
            int j = i + len - 1;
            if (j > n)  break;
            if (a[i] == a[j])
                dp[i][j] = min(dp[i][j], dp[i + 1][j - 1]);
            for (int k = i; k < j; k ++ )
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j]);
            }
        }
    }
    cout << dp[1][n];
    return 0;
}