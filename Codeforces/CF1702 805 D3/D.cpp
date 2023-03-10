/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:D. Not a Cheap String
    Date:2022/07/10
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
string s;
int k;
int a[50],b[50];

int main(){
    std::ios::sync_with_stdio(false);
    cin >> n;
    while(n--){
        ll sum = 0;
        cin >> s;
        cin >> k;
        int l = s.length();
        for(int i = 0; i < l ;++i){
            a[s[i]-'a'+1] ++;
            sum += (s[i]-'a'+1);
        }
        for(int i = 1; i <= 26; ++i){
            b[i] = a[i]+b[i-1];
        }
        if(b[k] == 0){
            cout << "" << endl;
            break;
        }
        for()
    }
    return 0;
}