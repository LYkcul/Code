/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:P4387
    Date:2022/07/02
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 100005

int t;
int n;

int main(){
    std::ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> n;
        int a[N], b[N];
        stack<int> s;
        for(int i = 1; i <= n; ++i){
            cin >> a[i];
        }
        for(int i = 1; i <= n; ++i){
            cin >> b[i];
        }
        int cnt = 1;
        for(int i = 1; i <= n; ++i){
            s.push(a[i]);
            while(s.top() == b[cnt]){
                s.pop();
                cnt++;
                if(s.empty()) break;
            }
        }
        if(s.empty())   cout << "Yes" << endl;
        else    cout << "No" << endl;
    }
    return 0;
}