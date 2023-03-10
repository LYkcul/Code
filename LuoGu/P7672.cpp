#include <bits/stdc++.h>
using namespace std;

int n;
string s[105];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i ++ )
        cin >> s[i];
    for (int i = 1; i <= n; i ++ )
    {
        for (int j = 1; j <= n; j ++ )
        {
            if (i == j) continue;
            string str = s[i];
            reverse(s[i].begin(), s[i].end());
            if (s[i] == s[j])
            {
                int l = s[i].length();
                cout << l << " ";
                if (i > j) 
                {
                    cout << s[j][l / 2];
                    return 0;
                }
                else
                {
                    cout << s[i][l / 2];
                    return 0;
                }
            }
            s[i] = str;
        }
    }
    for (int i = 1; i <= n; i ++ )
    {
        string st = s[i];
        reverse(st.begin(), st.end());
        if (st == s[i])
        {
            cout << s[i].length() << " " << s[i][s[i].length() / 2];
            break;
        }
    }
    return 0;
}