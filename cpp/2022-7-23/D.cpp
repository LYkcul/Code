/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:
    Date:2022/07/
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
int a[100005];
ll sum;

int main(){
    std::ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    sort(a+1,a+n+1);
    int c=1;
    while(sum){
        if(sum % 3 == 0){
            cout << sum << endl;
            return 0;
        }
        sum -= a[c++];
    }
    return 0;
}