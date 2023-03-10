#include <bits/stdc++.h>
using namespace std;

int r;
int a[1005][1005];
int dp[1005][1005];
int res;

int main()
{
    cin >> r;
    for (int i = 1; i <= r; i ++ )
        for (int j = 1; j <= i; j ++ )
            cin >> a[i][j];
    dp[1][1] = a[1][1]; //初始化
    for (int i = 1; i <= r; i ++ )
    {
        for (int j = 1; j <= i; j ++ )
        {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
        }
    }
    for (int i = 1; i <= r; i ++ )
    {
        res = max(dp[r][i], res);
    }
    cout << res << endl;
    return 0;
}