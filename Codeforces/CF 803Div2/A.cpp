/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:A
    Date:2022/06/28
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int t, n, a[105];

int main(){
    std::ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            int s = a[1];
            int cnt = i;
            for(int j = 2; j <= n; j++){
                if(i == j){
                    continue;
                }
                s = s ^ a[j];
            }
            if(s == a[cnt]){
                cout << a[cnt] << endl;
                break;
            }
        }
    }
    return 0;
}