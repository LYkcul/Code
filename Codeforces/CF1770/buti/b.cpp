#include <bits/stdc++.h>
using namespace std;

int t, n, k;

void solve()
{
    cin >> n >> k;
    if (k == 1)
    {
        for (int i = 1; i <= n; i ++ )  cout << i << " ";
        cout << endl;
        return ;
    }
    int cnt = 0;
    for (int i = n, j = 1; cnt <= n; i --, j ++ )
    {
        if (cnt >= n)   break;
        if (cnt + 1 == n)
        {
            cout << i;
            cnt ++ ;
        }
        else
        {
            cout << i << " " << j << " ";
            cnt += 2;
        }
        
    }
    cout << endl;
}

int main()
{
    cin >> t;
    while (t -- ) solve();
    return 0;
}