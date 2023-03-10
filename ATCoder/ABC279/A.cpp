#include <bits/stdc++.h>
using namespace std;

char c;
int cnt;

int main()
{
    while (cin >> c)
    {
        if (c == 'w')   cnt += 2;
        if (c == 'v')   cnt ++ ;
    }
    cout << cnt;
    return 0;
}