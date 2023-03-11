#include <bits/stdc++.h>
using namespace std;

string s;

void solve()
{
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i += 2 )
    {
        cout << s[i + 1] << s[i];
    }
}

int main()
{
    solve();
    return 0;
}