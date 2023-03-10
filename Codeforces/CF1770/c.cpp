#include <bits/stdc++.h>
using namespace std;

int t, n;
long long a[105];

int main()
{
    cin >> t;
    while (t -- )
    {
        cin >> n;
        for (int i = 1; i <= n; i ++ )  scanf("%lld", &a[i]);
        bool f = 1;
        for (int i = 1; i <= n; i ++ )
        {
            for (int j = i + 1; j <= n; j ++ )
            {
                if (a[i] == a[j])
                {
                    f = 0;
                    cout << "NO\n";
                }
            }
            if (!f) break;
        }
        if (!f)  continue;
        bool flag = 1;
        for (int i = 1; i <= n; i ++ )
        {
            long long tmp = a[i] - 1;
            f = 1;
            for (int j = 1; j <= n; j ++ )
            {
                for (int k = j + 1; k <= n; k ++ )
                {
                    if (__gcd(a[j] + tmp, a[k] + tmp) != 1)
                    {
                        //cout << a[j] << " " << a[k] << endl;
                        f = 0;
                        break;
                    }
                }    
                if (!f) break;
            }
            if (f)
            {
                cout << "YES\n";
                flag = 0;
                break;
            }
        }
        if (flag)   cout << "NO\n";
    }
    return 0;
}