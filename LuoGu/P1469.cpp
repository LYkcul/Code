#include <bits/stdc++.h>
using namespace std;
// AC

int n, x;
int ans;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> x;
        ans ^= x;
    }
    cout << ans;
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
// 4mb
// MLE
const int N = 1e7 + 10;

int n;
int a[N];
map<int, int> mp;
map<int, int> :: iterator it;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        cin >> a[i];
        mp[a[i]] ++ ;
    }
    for (it = mp.begin(); it != mp.end(); it ++ )
    {
        int tmp = it -> second;
        if (tmp & 1)
        {
            cout << it -> first;
            return 0;
        }
    }
    return 0;
}
*/