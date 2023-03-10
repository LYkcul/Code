#include <bits/stdc++.h>
using namespace std;

string s;
int f[55][55];

int main()
{
    memset(f, 0x3f3f3f3f, sizeof(f));
    cin >> s;
    int n = s.length();
    s = " " + s;
    for (int i = 1; i <= n; i ++ )
        f[i][i] = 1;
    for (int len = 1; len <= n; len ++ )
    {
        for (int i = 1, j = i + len; j <= n; i ++, j ++ )
        {
            if (s[i] == s[j])
            {
                f[i][j] = min(f[i + 1][j], f[i][j - 1]);
            }
            else
            {
                for (int k = i; k <= j; k ++ )
                {
                    f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j]);
                }
            }
        }
    }
    cout << f[1][n];
    return 0;
}