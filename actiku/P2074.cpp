#include <bits/stdc++.h>
using namespace std;

int n;
int c = 1;
long long f[40][40];

int main()
{  
    while (cin >> n && n != -1)
    {
        memset(f, 0, sizeof(f));
        cout << c << " " << n << " ";
        c ++ ;
        f[1][1] = 1;
        for (int i = 1; i <= n + 1; i ++ )  f[0][i] = 1;
        for (int i = 1; i <= n + 1; i ++ )
        {
            for (int j = 1;j <= i; j ++ )
            {
                f[i][j] = f[i - 1][j] + f[i][j - 1];
            }
        }
        cout << f[n + 1][n + 1] * 2 << endl;
    }
    return 0;
}