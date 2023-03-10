#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;

int main()
{
    cin >> t;
    while (t -- )
    {
        cin >> n >> s;
        map<string, int> mp;
        bool f = 1;
        for (int i = 0; i < s.length(); i ++ )
        {
            string str = s.substr(i, 2);
            if (mp.find(str) != mp.end())
            {
                if (mp[str] == i - 1)   continue;
                else
                {
                    cout << "YES\n";
                    f = 0;
                    break;
                }
            }
            else
            {
                mp[str] = i;
            }
        }
        if (f)  cout << "NO\n";
    }
    return 0;
}