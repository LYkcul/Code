#include <bits/stdc++.h>
using namespace std;

int t, n, k;
int a[200005];

int main()
{
    cin >> t;
    while (t -- )
    {
        cin >> n >> k;
        int t1 = n, i = 0, t2 = 0;
        //n 1 2 ... k n-1 k+1 k+2...2k
        while (i <= n)
        {
            cout << t1 << " ";
            t1 -- ;
            i ++ ;
            if (i >= n) break;
            for (int j = 1; j <= k; j ++ )
            {
                cout << j + k * t2 << " ";
                i ++ ;
                if (i >= n) break;
            }        
            if (i >= n) break;
            t2 ++ ;       
        }
        cout << endl;
    }
    return 0;
}