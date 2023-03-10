#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000005];

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++ )
    {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i += 2)
        {
            printf("%d %d ", a[n - i + 1], a[i]);
        }
    }
    else
    {
        for (int i = 1; i <= n / 2; i ++ )
        {
            printf("%d %d ", a[n - i + 1], a[i]);
        }
        cout << a[n / 2 + 1];
    }
    return 0;
}