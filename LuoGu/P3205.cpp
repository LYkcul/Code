#include <bits/stdc++.h>
using namespace std;

const int mod = 19650827;

int f[1005][1005][3];
int n;
int a[1005];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i ++ )
        cin >> a[i];
    for (int i = 1; i <= n; i ++ )
        f[i][i][0] = 1;
    for (int len = 1; len <= n; len ++ )
    {
        for (int i = 1;i <= n; i ++ )
        {
            int j = i + len;
            if (j > n)  break;
            if (a[i] < a[j])    f[i][j][0] += f[i + 1][j][1];
            if (a[i] < a[i + 1])    f[i][j][0] += f[i + 1][j][0];
            if (a[j] > a[j - 1])    f[i][j][1] += f[i][j - 1][1];
            if (a[j] > a[i])    f[i][j][1] += f[i][j - 1][0];
            f[i][j][1] %= mod;
            f[i][j][0] %= mod;
        }
    }
    cout << (f[1][n][1] + f[1][n][0]) % mod;
    return 0;
}