#include <bits/stdc++.h>
using namespace std;

int n;
int a, v[200005];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> a;
        if (!v[i])  v[a] ++ ;
    }
    int res = 0;
    for (int i = 1; i <= n; i ++ )
        if (!v[i])  res ++ ;
    cout << res << endl;
    for (int i = 1; i <= n; i ++ )
        if (!v[i])  cout << i << " ";
}

int main()
{
    solve();
    return 0;
}