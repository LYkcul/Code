#include <bits/stdc++.h>
using namespace std;

int n, k;
int f[100005];

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= max(n, k); i ++ ){
        f[i] = abs(n - i);
    }
    f[n]= 0;
    if (k <= n)
    {
        cout << n - k << endl;
        return 0;
    }
    for (int i = n + 1; i < k; i ++)
    {
        int t = min(f[i - 1], f[i + 1]);
        if (i % 2 == 0)
        {
            t = min(t, f[i / 2]);
        }
        f[i] = t + 1;
    }
    int t = f[k - 1];
    if (k % 2 == 0)
    {
        t = min(t, f[k / 2]);
    }
    f[k] = t + 1;
    cout << f[k] << endl;
    return 0;
}