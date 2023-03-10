/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:luogu P5681
    Date:2022/06/27
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll a, b, c;

int main(){
    std::ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    if(a * a > b * c){
        cout << "Alice";
    }
    else{
        cout << "Bob";
    }
    return 0;
}