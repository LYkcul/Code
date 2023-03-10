/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:A.When?
    Date:2022/07/02
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int k;

int main(){
    std::ios::sync_with_stdio(false);
    cin >> k;
    if(k < 60){
        if(k <= 9){
            cout << "21:0" << k;
        }
        else{
            cout << "21:" << k;
        }
    }
    else{
        int s=k/60;
        k = k - 60 * s;
        cout << 21 + s;
        if(k <= 9){
            cout << ":0" << k;
        }
        else{
            cout << ":" << k;
        }
    }
    return 0;
}