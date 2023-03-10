#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int res;

int main()
{
    cin >> s1 >> s2;
    int len = s1.length();
    for (int i = 0; i < len; i ++ )
    {
        if (s1[i] != s2[i])
        {
            res ++ ;
            if (s1[i] == '*')   s1[i] = 'o';
            else    s1[i] = '*';
            if (s1[i + 1] == '*')   s1[i + 1] = 'o';
            else    s1[i + 1] = '*'; 
        }  
    }
    cout << res << endl;
    return 0;
}