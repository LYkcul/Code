#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void solve()
{
    cin >> n >> s;
    int len = s.length();
    bool f = 1;
    int sum = 0;
    for (int i = 0, j = len - 1; i < j; i ++, j -- )
    {
        if (s[i] != s[j]){if (sum % 2 == 0) sum ++ ;}
        else {if (sum % 2 == 1)  sum ++ ;}
        if (sum > 2)   
        {
            puts("No");
            return ;
        }
    }
    puts("Yes");
    return ;
}

int main()
{
    int T; cin >> T;
    while (T -- )   solve();
    return 0;
}