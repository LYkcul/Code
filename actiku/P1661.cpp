#include <bits/stdc++.h>
using namespace std;

int n, t, a[25];

int main()
{
    cin >> n >> t;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> a[i];
    }
    for (int S = 0; S < (1 << n); S ++ )
    {
        int sum = 0;
        for (int i = 0; i < n; i ++ )
        {
            if (S & (1 << i))
            {
                sum += a[i + 1];
            }
        }
        if (sum == t)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}