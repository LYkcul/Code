#include <bits/stdc++.h>
using namespace std;

int n;
int a[100005];

void solve()
{
    int res = 0;
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> a[i];    
    }
    for (int i = 1; i < n; i ++ )
    {
        if (a[i] > a[i + 1])    res ++, i ++ ;
    }
    cout << res << "\n";
    return ;
}

int main()
{
    int T; cin >> T;
    while (T -- )
        solve();
    return 0;
}