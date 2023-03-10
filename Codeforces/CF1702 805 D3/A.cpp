/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:A. Round Down the Price
    Date:2022/07/10
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll t, n;

inline ll f(ll x){
    ll cnt = 0;
    while(x){
        cnt++;
        x /= 10;
    }
    return cnt;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin >> t;
    for(int i = 1; i <= t; ++i){
        cin >> n;
        int len = f(n);
        ll tmp = pow(10, len - 1);
        cout << n - tmp << endl;
    }
    return 0;
}