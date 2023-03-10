#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int a[105];
int dp[105][105];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> a[i];
    }
    for (int len = 1; len <= n; len ++ )
    {
        for (int i = 2; i < n; i ++ )
        {
            int j = i + len - 1;
            if (j > n)  break;
            dp[i][j] = 0x3f3f3f3f;
            for (int k = i; k <= j; k ++ )
            {
                dp[i][j] = min(dp[i][j], dp[i][k - 1] + dp[k + 1][j] + a[i - 1] * a[k] * a[j + 1]);
            }    
        }
    }
    cout << dp[2][n - 1];
    return 0;
}