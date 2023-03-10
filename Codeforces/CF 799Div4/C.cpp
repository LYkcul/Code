/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:C
    Date:2022/06/14
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

int t;
string mp[20];
int ans[20];

int main(){
    std::ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        memset(ans,0,sizeof(ans));
        for(int i=2;i<=9;i++){
            for(int j=1;j<=8;j++){
                cin>>mp[i][j];
            }
        }
        for(int i=2;i<=9;i++){
            for(int j=1;j<=8;j++){
                if(mp[i][j] == '#'){
                    ans[i]++;
                }
            }
        }
        for(int i=3;i<9;i++){
            if(ans[i]==1 && ans[i-1]==2 && ans[i+1]==2){
                for(int j=1;j<=8;j++){
                    if(mp[i][j]=='#'){
                        cout<<i-1<<" "<<j<<endl;
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}