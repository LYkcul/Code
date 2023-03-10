#include <bits/stdc++.h>
using namespace std;

string s;
int dp[105][105];

int main()
{
    while (cin >> s && s != "end")
    {   
        memset(dp, 0, sizeof(dp));
        int n = s.length();
        s = " " + s;
        for (int len = 2; len <= n; len ++ )
        {
            for (int beg = 1; beg <= n; beg ++ )
            {
                int end = beg + len - 1;
                if (end > n)
                    break;
                for (int k = beg; k < end; k ++ )
                    dp[beg][end] = max(dp[beg][end], dp[beg][k] + dp[k + 1][end]);
                if ((s[beg] == '(' && s[end] == ')') || (s[beg] == '[' && s[end] == ']'))
                    dp[beg][end] = max(dp[beg][end], dp[beg + 1][end - 1] + 2);
            }
        }
        cout << dp[1][n] << endl;
    }
    return 0;
}