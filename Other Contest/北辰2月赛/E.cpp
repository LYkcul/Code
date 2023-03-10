#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> a(100005), sum(100005);
map<int, int> cnt;
signed main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    cnt[0] = 1;
    int ans = 0;
    for (int r = 1; r <= n; r++) {
        int m = sum[r] % k;
        ans += cnt[m]; 
        cnt[m]++;
    }
    cout << ans << endl;
    return 0;
}

