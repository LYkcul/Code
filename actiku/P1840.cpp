#include <bits/stdc++.h>
using namespace std;

int n, k;
int dp[205][10];

int main()
{
    cin >> n >> k;
    dp[0][0] = 1;
    for (int i = 1; i <= n; i ++ )
        dp[i][1] = 1;
    for (int i = 1; i <= n; i ++ )
    {
        for (int j = 2; j <= min(i, k); j ++ )
        {
            if (i < j)
                dp[i][j] = 0;
            else
                dp[i][j] = dp[i - j][j] + dp[i - 1][j - 1];
        }
    }
    cout << dp[n][k];
    return 0;
}