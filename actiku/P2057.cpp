#include <bits/stdc++.h>
using namespace std;

int n;
int a[105];
int dpmx[305][305], dpmi[305][305];
int sum[305];
int res1 = 0x3f3f3f3f, res2 = -0x3f3f3f3f;

int main()
{
    memset(dpmi, 0x3f3f3f3f, sizeof(dpmi));
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> a[i];
        a[i + n] = a[i]; 
        dpmi[i][i] = dpmi[i + n][i + n] = 0;
    }
    for (int i = 1; i <= 2 * n; i ++ )
        sum[i] = sum[i - 1] + a[i];
    for (int len = 1; len <= n; len ++ )
    {
        for (int i = 1; i + len <= 2 * n; i ++ )
        {
            int j = i + len - 1;
            for (int k = i; k < j; k ++ )
            {
                dpmx[i][j] = max(dpmx[i][k] + dpmx[k + 1][j] + sum[j] - sum[i - 1], dpmx[i][j]);
                dpmi[i][j] = min(dpmi[i][k] + dpmi[k + 1][j] + sum[j] - sum[i - 1], dpmi[i][j]);
            }            
        }    
    } 
    for (int i = 1; i <= n; i ++ )
    {
        res1 = min(res1, dpmi[i][i + n - 1]);
        res2 = max(res2, dpmx[i][i + n - 1]);
    }
    cout << res1 << "\n" << res2;
    return 0;
}