#include <iostream>
#include <vector>
using namespace std;

// 计算组合数 C(n, k) = n! / (k! * (n-k)!)
int comb(int n, int k) {
    int res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

// 计算阶乘 n!
int factorial(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

// 计算 n 个正整数的乘积等于 m 的方案数
int countWays(int n, int m) {
    // 分解质因数，得到 m 的质因子分解结果
    vector<int> primes;
    vector<int> powers;
    int x = m;
    for (int i = 2; i * i <= x; i++) {
        int cnt = 0;
        while (x % i == 0) {
            x /= i;
            cnt++;
        }
        if (cnt > 0) {
            primes.push_back(i);
            powers.push_back(cnt);
        }
    }
    if (x > 1) {
        primes.push_back(x);
        powers.push_back(1);
    }

    // 根据容斥原理计算方案数
    int k = primes.size();
    int res = 0;
    for (int i = 1; i <= k; i++) {
        // 计算至少有 i 个盒子是空的方案数
        int t = comb(k, i) * factorial(n-i) * factorial(k-i);
        if (i % 2 == 1) {
            res += t;
        } else {
            res -= t;
        }
    }
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << countWays(n, m) << endl;
    return 0;
}

