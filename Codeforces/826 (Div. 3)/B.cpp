#include <bits/stdc++.h>
using namespace std;

int t, n;

void solve()
{
    cin >> n;
    if (n == 1 || n == 3)
    {
        cout << "-1\n";
        return ;
    }   
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i ++ )
            cout << n - i + 1 << " ";
    }
    else
    {
        for (int i = n; i > n / 2 + 1; i -- )
            cout << i  << ' ';
        for (int i = 1; i <= n / 2 + 1; i ++ )
            cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    cin >> t;
    while (t -- )   solve();
    return 0;
}