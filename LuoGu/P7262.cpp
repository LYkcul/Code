#include <bits/stdc++.h>
using namespace std;

int n, m;
char c;
char mp[150][150];

int main()
{
    cin >> n >> m >> c;
    for(int i = 1; i <= n; ++ i )
    {
        for (int j = 1; j <= m; ++ j )
        {
            cin >> mp[i][j];
        }
    }
    if (c == '^')
    {
        for (int i = 1; i <= n; ++ i )
        {
            for (int j = 1; j <= m; ++ j )
            {
                if (mp[i][j] == 'o')
                {
                    for (int k = i; k >= 1; k -- )
                    {
                        if (mp[k][j] == 'x')
                        {
                            cout << "GG";
                            return 0;
                        }
                    }
                }
            }
        }
        cout << "OK";
    }
    else if (c == 'v')
    {
       for (int i = 1; i <= n; ++ i )
        {
            for (int j = 1; j <= m; ++ j )
            {
                if (mp[i][j] == 'o')
                {
                    for (int k = i; k <= n; k ++ )
                    {
                        if (mp[k][j] == 'x')
                        {
                            cout << "GG";
                            return 0;
                        }
                    }
                }
            }
        }
        cout << "OK";
    }
    else if (c == '>')
    {
       for (int i = 1; i <= n; ++ i )
        {
            for (int j = 1; j <= m; ++ j )
            {
                if (mp[i][j] == 'o')
                {
                    for (int k = j; k <= m; k ++ )
                    {
                        if (mp[i][k] == 'x')
                        {
                            cout << "GG";
                            return 0;
                        }
                    }
                }
            }
        }
        cout << "OK";
    }
    else
    {
       for (int i = 1; i <= n; ++ i )
        {
            for (int j = 1; j <= m; ++ j )
            {
                if (mp[i][j] == 'o')
                {
                    for (int k = j; k >= 1; k -- )
                    {
                        if (mp[i][k] == 'x')
                        {
                            cout << "GG";
                            return 0;
                        }
                    }
                }
            }
        }
        cout << "OK";
    }
    return 0;
}