#include <bits/stdc++.h>
using namespace std;

int n, m;
int ans = 0x3f3f3f3f;

void dfs(int ceng, int lastR, int lastH, int nowV, int nowS)
{
    if (ceng == m)
    {
        if (nowV == n && nowS < ans)
            ans = nowS;
        return ;
    }
    if (nowV > n)   return ;
    if (nowS >= ans)    return ;
    //if (nowV + lastR * lastR * (lastH + 1) * lastH / 2 < n) return ;
    if (ceng + min(lastH, lastR) < m) return ;
    if (2 * (n - nowV) / lastR + nowS >= ans)   return ;
    
    for (int r = lastR - 1; r >= (m - ceng); r -- )
    {
        if (m - ceng == m)  nowS = r * r;
        int hh = min((n - nowV)/(r * r), lastH - 1);
        for (int h = hh; h >= (m - ceng); h -- )
            dfs(ceng + 1, r, h, nowV + r * r * h, nowS + 2 * r * h);
    }
}

int main()
{
    cin >> n >> m;
    dfs(0, n + 1, n + 1, 0, 0);
    if (ans == 0x3f3f3f3f)
        ans = 0;
    cout << ans;
    return 0;
}