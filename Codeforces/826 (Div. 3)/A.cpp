#include <bits/stdc++.h>
using namespace std;

int n;
string s1, s2;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> s1 >> s2;
        if (s1 == s2)
        {
            cout << "=\n";
        }
        else
        {
            char c1 = s1[s1.length()-1];
            char c2 = s2[s2.length()-1];
            //cout << c1 << " " << c2 << endl;
            int r1=0, r2=0;
            for (int i = 0; i < s1.length(); i ++ )
                if (s1[i] == 'X')   r1 ++ ;
            for (int i = 0; i < s2.length(); i ++ )
                if (s2[i] == 'X')   r2 ++ ;
            if (c1 == c2)
            {
                if (c1 == 'S')
                {
                    if (r1 > r2)    cout << "<\n";
                    else cout << ">\n";
                }
                else
                {
                    if (r1 < r2)    cout << "<\n";
                    else cout << ">\n";
                }
            }
            else
            {
                if ((c1=='M'&&c2=='S')||(c1=='L'&&c2=='M')||(c1=='L'&&c2=='S'))
                    cout << ">\n";
                else   
                    cout << "<\n";
            }
        }
    }
    return 0;
}