#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second
#define int long long

typedef pair<int, int> PII;

const int N = 505, K = 105;

int n, k, res;
PII points[N];
int dp[N][K];

void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i ++ )
        cin >> points[i].x >> points[i].y;
    sort(points + 1, points + n + 1);
    for (int i = 0; i <= k; i ++ )  dp[1][i] = i + 1;
    for (int i = 2; i <= n; i ++ )
    {
        for (int j = 0; j <= k; j ++ )
        {
            dp[i][j] = j + 1;
            for (int p = 1; p < i; p ++ )
            {
                if (points[p].x <= points[i].x && points[p].y <= points[i].y) 
                {
                    int sum = points[i].x - points[p].x + points[i].y - points[p].y - 1;
                    if (sum <= j)
                        dp[i][j] = max(dp[i][j], dp[p][j - sum] + sum + 1);
                }
            }
        }
    }
    res = -1;
    for (int i = 1; i <= n; i ++ )
        res = max(res, dp[i][k]);
    cout << res << "\n";
}

signed main()
{
    solve();
    return 0;
}