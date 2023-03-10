#include <bits/stdc++.h>
using namespace std;

//用2个一维数组解决
//只需要记录当前行和上一行即可

int r;
int a[1005][1005];
int f1[1005], f2[1005];
int res;

int main()
{
    cin >> r;
    for (int i = 1; i <= r; i ++ )
        for (int j = 1; j <= i; j ++ )
            cin >> a[i][j];
    f1[1] = a[1][1];
    for (int i = 1; i <= r; i ++ )
    {
        for (int j = 1; j < i; j ++ )
            f2[j] = f1[j];
        for (int j = 1; j <= i; j ++ )
            f1[j] = max(f2[j - 1], f2[j]) + a[i][j];
    }
    for (int i = 1; i <= r; i ++ )
    {
        res = max(f1[i], res);
    }
    cout << res << endl;
    return 0;
}