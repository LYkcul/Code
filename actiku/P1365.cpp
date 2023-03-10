#include <bits/stdc++.h>
using namespace std;

int n;
int dp[30][2];

int main()
{  
    cin >> n;  
    dp[1][0] = dp[1][1] = 1;
    for (int i = 2; i <= n; i ++ )
    {
        dp[i][1] = dp[i - 1][1] + dp[i - 1][0];
        dp[i][0] = dp[i - 1][1];
    }
    cout << dp[n][1] + dp[n][0];
    return 0;
}