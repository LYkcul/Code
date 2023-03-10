#include <bits/stdc++.h>
using namespace std;

int n, m;
int dp[505][505];
int sum, X;
int res;

int main()
{
    cin >> n >> m;
    dp[0][0] = 1;
    sum = (1 + n) * n / 2;
    for (int i = 1; i <= n; i ++ )
    {
        for (int j = 0; j <= sum; j ++ )
        {
            if (j - i >= 0)
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - i];
            else    
                dp[i][j] = dp[i - 1][j];
        }
    }
    for (int k = 0; k < sum; k ++ )
        if (sum - 2 * k == m)
            res += dp[n][k];
    cout << res;
    return 0;
}