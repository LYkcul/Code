#include <bits/stdc++.h>
using namespace std;

int a[1000006];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++ i )
    {
        cin >> a[i];
    }
    int res = 0, i = 1;
    int tmp = a[1] + 1;
    while (i <= n)
    {
        if (a[i] != tmp)
        {
            res ++;
            tmp = a[i];    
        }
        i ++ ;
    }
    cout << res << endl;
    return 0;
}