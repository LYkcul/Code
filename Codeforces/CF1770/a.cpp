#include <bits/stdc++.h>
using namespace std;

int t;
int n, m;
long long a[105], b[105];
int f[105];

int main()
{
    cin >> t;
    while (t -- )
    {
        memset(f, 0, sizeof(f));
        long long sum = 0;
        cin >> n >> m;
        for (int i = 1; i <= n; i ++ )
        {
            cin >> a[i];
        }
        for (int i = 1; i <= m; i ++ )
        {
            cin >> b[i];
        }
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= m; i ++ )
        {
            int j = 1;
            while (b[i] < a[j] && j <= n)
            {
                j ++ ;
            }
            if (j >= n)
                a[1] = b[i];
            else
                a[j] = b[i];
            sort(a + 1, a + n + 1);
        }
        for (int i = 1; i <= n; i ++ )  sum += a[i];
        cout << sum << endl;
    }
    return 0;
}
