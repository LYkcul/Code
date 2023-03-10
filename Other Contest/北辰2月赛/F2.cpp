#include <iostream>
#include <vector>
using namespace std;

// ��������� C(n, k) = n! / (k! * (n-k)!)
int comb(int n, int k) {
    int res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

// ����׳� n!
int factorial(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

// ���� n ���������ĳ˻����� m �ķ�����
int countWays(int n, int m) {
    // �ֽ����������õ� m �������ӷֽ���
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

    // �����ݳ�ԭ����㷽����
    int k = primes.size();
    int res = 0;
    for (int i = 1; i <= k; i++) {
        // ���������� i �������ǿյķ�����
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

