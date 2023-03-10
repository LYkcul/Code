/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:B.Number Box
    Date:2022/07/02
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
char a;
int b[105];

bool cmp(int a, int b){return a > b;}

int main(){
    std::ios::sync_with_stdio(false);
    cin >> n;
    int c=0;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> a;
            b[++c]=a-'0';
        }
    }
    sort(b+1, b+c+1, cmp);
    for(int i = 1; i <= n; ++i){
        cout << b[i];
    }
    return 0;
}