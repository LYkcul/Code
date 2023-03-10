#include <bits/stdc++.h>
using namespace std;

int n;
int a[100005];
int f[100005];
int res;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i ++ )
    {
        f[i] = max(f[i - 1], 0) + a[i];
    }
    for (int i = 1; i <= n; i ++ )
    {
        res = max(res, f[i]);
    }
    cout << res;
    return 0;
}