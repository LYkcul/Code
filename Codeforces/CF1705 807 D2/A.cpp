/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:A. Mark the Photographer
    Date:2022/07/15
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int t;
int n,x;
int a[105],b[105];
int tt[205];

int main(){
    std::ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> n >> x;
        for(int i = 1; i <= 2*n; ++i) cin >> tt[i];
        sort(tt+1,tt+2*n+1);
        for(int i = 1; i <= n; ++i) a[i]=tt[i];
        for(int i = n+1; i <= 2*n; ++i) b[i-n]=tt[i];
        sort(a+1, a+n+1);
        sort(b+1, b+n+1);
        bool flag = 1;
        for(int i=1; i<=n; ++i){
            if(abs(a[i] - b[i]) < x){
                flag = 0;
                cout << "NO" << endl;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
    }
    return 0;
}