#include <bits/stdc++.h>
using namespace std;

#define int long long

int k;
int n;
int d, e;

void solve()
{
    cin >> n >> d >> e;
    long long tmp = n - e * d + 2;
    long long l = 1, r = tmp;
    while (l < r)
    {
        long long mid = l + r >> 1;
        if (mid * (tmp - mid) < n)
            l = mid + 1;
        else   
            r = mid;
    }
    if (l * (tmp - l) == n)  
        cout << l << " " << tmp - l << "\n";
    else    
        cout << "NO\n";
}

signed main()
{   
    cin >> k;
    while (k -- )
        solve();
    return 0;
}