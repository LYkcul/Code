#include <bits/stdc++.h>
using namespace std;

int mp[15][15];
int dp[15][15][15][15];
int n;

int maxx(int i, int j, int k, int m)
{
    return max(max(dp[i - 1][j][k - 1][m], dp[i - 1][j][k][m - 1]),
     max(dp[i][j - 1][k - 1][m], dp[i][j - 1][k][m - 1]));
}

int main(){
    cin >> n;
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if (!a && !b && !c) break;        
        mp[a][b] = c;
    }
    for (int i = 1; i <= n; i ++ )
    {
        for (int j = 1; j <= n; j ++ )
        {
            for (int k = 1; k <= n; k ++ )
            {
                int m = i + j - k;
                dp[i][j][k][m] = maxx(i, j, k, m);
                dp[i][j][k][m] += mp[i][j] + mp[k][m];
                if (i == k && j == m)  
                    dp[i][j][k][m] -= mp[i][j];
            }
        }
    }
    cout << dp[n][n][n][n];
    return 0;
}