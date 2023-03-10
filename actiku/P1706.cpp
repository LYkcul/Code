#include <bits/stdc++.h>
using namespace std;

struct node
{
    int s, e, c;
}k[1005];

int t;
int n, m;
int f[1005];

bool cmp(node a, node b)
{
    return a.s < b.s;
}

int main()
{
    cin >> t;
    while (t -- )
    {
        memset(f, 0, sizeof(f));
        memset(k, 0, sizeof(k));
        cin >> n >> m;
        int res = 0;
        for (int i = 1; i <= m; i ++ )
        {
            cin >> k[i].s >> k[i].e >> k[i].c;
        }
        sort(k + 1, k + m + 1, cmp);
        for (int i = 1; i <= m; i ++ )
        {
            f[k[i].e] = max(f[k[i].e], f[k[i].s - 1] + k[i].c);
        }
        for (int i = 1; i <= n; i ++ )
            res = max(res, f[i]);
        cout << res << endl;
    }
    return 0;
}