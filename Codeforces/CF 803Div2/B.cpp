/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:B
    Date:2022/06/28
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N=2e5+10;

int t, n, k;
int a[N];

int main(){
    std::ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        int ans = 0;
        cin >> n >> k;
        for(int i = 1; i <= n; ++i){
            cin >> a[i];
        }    
        if(k != 1){
            for(int i = 2; i < n; ++i){
                if(a[i] > a[i - 1] + a[i + 1]){
                    ans ++;
                }
            }
        }
        else{
            ans = (n - 1) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}