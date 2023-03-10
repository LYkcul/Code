#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;

int main(){
    std::ios::sync_with_stdio(false);
    cin >> n;
    int ans = 2022;
    while(n){
        ans += n%10;
        n /= 10;
    }
    cout << ans << endl;
    if(ans%4==0 && ans%100!=0){
        cout << "Ordinary leap year"<<endl;
    }
    else if(ans%400 == 0){
        cout << "Century leap year"<<endl;
    }
    else{
        cout << "Common year";
    }
    return 0;
}