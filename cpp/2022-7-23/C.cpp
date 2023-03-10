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

ll t,n;

bool check(long long x){
    map<ll,ll> mp;
    ll tx=x,tt=0;
    while(tt != 1){
        tt=0;
        while(tx){
            tt += (tx%10)*(tx%10);
            tx/=10;
        }
        if(mp.find(tt) != mp.end()) return 0;
        tx=tt;
        mp[tt]++;
    }
    return 1;
}

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(check(n)){
            cout << "true" << endl;
        }
        else{
            cout << "false" << endl;
        }
    }
    return 0;
}