#include <bits/stdc++.h>
using namespace std;

int n, t, m;

int main()
{
    cin >> t;
    while (t -- )
    {
        long long res = 0;
        cin >> n >> m;
        vector<long long> a; 
        for (int i = 0; i < n + m; i ++ )
        {
            long long x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end() - 1);
        reverse(a.begin(), a.end());
        for (int i = 0; i < n; i ++ )
        {
            res += a[i];
        }
        cout << res << endl;
    }
    return 0;
}