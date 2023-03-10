#include <bits/stdc++.h>
using namespace std;

int n;
string s;
long long res;

int main()
{
    cin >> n >> s;
    s = " " + s;
    for (int i = 1; i <= n; i ++ )
    {
        int L = i - 1, R = i + 1;
        while (s[i] != s[L] && L >= 1)  L -- ;
        while (s[i] != s[R] && R <= n)  R ++ ;
        int t1 = i - L - 1, t2 = R - i - 1;
        if (t1 >= 2)    res += t1 - 1;
        if (t2 >= 2)    res += t2 - 1;
        if (t1 > 0 && t2 > 0)   res += 1LL * t1 * t2;
    }
    cout << res << endl;
    return 0;
}