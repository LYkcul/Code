#include <bits/stdc++.h>
using namespace std;

#define ll long long

string s;
map<int, int> vis;
int ans;

int main(){
    std::ios::sync_with_stdio(false);
    cin >> s;
    int l = s.length();
    for(int i = 0; i < l; ++i){
        if(s[i] >= '0' && s[i] <= '9')){
            ll ss=0;
            int t = i;
            int cnt = 0;
            while(s[++i] >= '0' && s[i] <= '9'){
                ++cnt;
            }
            for(int i = t+cnt; i >= t; --i){
                ss = ss+(s[i]-'0');
            }
            if(vis.find(ss) == vis.end()){
                ans++;
            }
            vis[ss] = 1;
        }
    }
    cout << ans;
    return 0;
}