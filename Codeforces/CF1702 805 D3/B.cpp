/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:B. Polycarp Writes a String from Memory
    Date:2022/07/10
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int ans = 0;

int main(){
    std::ios::sync_with_stdio(false);
    cin >> n;
    while(n--){
        cin >> s;
        ans = 0;
        int len = s.length();
        for(int i = 0; i < len; i++){
            int cnt = 0;
            int t[50]={0};
            while(1){         
                if(cnt >= 3)    break;
                if(!t[s[i]-'a'+1]){
                    cnt++;
                    t[s[i]-'a'+1]++;
                }
                i++;
            }
            i--;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
