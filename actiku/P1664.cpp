#include <bits/stdc++.h>
using namespace std;

char c;
int a[15][15], t[15][15];

bool check(int op)
{
    for (int j = 1; j <= 4; j ++ )
    {
        if (a[4][j] != op)
        {
            return 0;
        }
    }
    return 1;
}

void copy_a()
{
    for (int i = 1; i <= 4; i ++ )
    {
        for (int j = 1; j <= 4; j ++ )
        {
            a[i][j] = t[i][j];
        }
    }
}

void change_a(int x, int y)
{
    a[x][y] = !a[x][y];
    a[x + 1][y] = !a[x + 1][y];
    a[x - 1][y] = !a[x - 1][y];
    a[x][y + 1] = !a[x][y + 1];
    a[x][y - 1] = !a[x][y - 1];
}

int solve(int op)
{
    copy_a();
    int ans = 0x3f3f3f3f, c = 0;
    for (int S = 0; S < (1 << 4); S ++ )
    {
        copy_a();
        c = 0;
        for (int i = 0; i < 4; i ++ )
        {
            if (S & (1 << i))
            {
                c ++ ;
                change_a(1, i + 1);
            }
        }
        for (int i = 2; i <= 4; i ++ )
        {
            for (int j = 1; j <= 4; j ++ )
            {
                if (a[i - 1][j] != op)
                {
                    c ++ ;
                    change_a(i, j);
                }
            }
        }
        if (check(op))
            ans = min(c, ans);
    }
    return ans;
}

int main()
{
    for (int i = 1; i <= 4; i ++ )
    {
        for (int j = 1; j <= 4 ;j ++ )
        {
            cin >> c;
            if (c == 'w')   t[i][j] = 1; 
        }
    }
    int res = min(solve(0), solve(1));
    if (res == 0x3f3f3f3f) cout << "Impossible";
    else    cout << res;
    return 0;
}