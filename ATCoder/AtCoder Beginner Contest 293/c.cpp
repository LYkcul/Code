#include <bits/stdc++.h>
using namespace std;

int n, m, res;
int a[105][105];
map<int, int> mp;

void dfs(int x, int y)
{
    if (x > n || y > m)   return ;
    if (x == n && y == m) 
    {
        res ++ ;
        return ;
    }
    if (x == 1 && y == 1)
    {
        dfs(x + 1, y);
        dfs(x, y + 1);
    }
    else
    {
        if (mp[a[x][y]] == 1)   return ;
        mp[a[x][y]] = 1;
        dfs(x + 1, y);
        dfs(x, y + 1);
        mp[a[x][y]] = 0;
    }
}

void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i ++ )
    {
        for (int j = 1; j <= m; j ++ )
        {
            cin >> a[i][j];
            mp[a[i][j]] = 0;
        }
    }
    if (a[1][1] == a[n][m])
    {
        cout << 0;
        return ;
    }
    mp[a[1][1]] = 1;
    mp[a[n][m]] = 1;
    dfs(1, 1);
    cout << res;
    return ;
}

int main()
{
    solve();
    return 0;
}