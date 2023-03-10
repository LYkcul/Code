#include <bits/stdc++.h>
using namespace std;

int n;
int a[300];
int res;
int dp[300][300];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> a[i];
        dp[i][i] = a[i];
    }
    for (int len = 2; len <= n; len ++ )
    {
        for (int i = 1; i + len - 1 <= n; i ++ )
        {
            int j = i + len - 1;
            for (int k = i; k < j; k ++ )
            {
                if (dp[i][k] == dp[k + 1][j] && dp[i][k])
                {
                    dp[i][j] = max(dp[i][j], dp[i][k] + 1);
                }
                res = max(res, dp[i][j]);
            }
        }
    }
    cout << res;
    return 0;
}