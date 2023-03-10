#include <bits/stdc++.h>
using namespace std;

int n;

void solve()
{
    int c = 0;
    cin >> n;
    int i = 1;
    while (1)
    {
        if (i % 3 == 0 || (i % 10) == 3)
        {
        }
        else
        {
            c ++ ;
        }
        if (c == n)
        {
            cout << i << endl;
            return ;
        }
        i ++ ;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T -- )
        solve();
    return 0;
}