/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:F
    Date:2022/06/14
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

int t;
int n;
int a[20005];
bool mp[1000000000];

int main(){
    std::ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        cin>>n;
        memset(mp,0,sizeof(mp));
        for(int i=1;i<=n;i++){
            cin>>a[i];
            mp[a[i]%10]=1;
        }
        int flag=0;
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                for(int k=1;k<=10;k++){
                    if((i+j+k) % 3 == 0){
                        if(mp[i] && mp[j] && mp[k]){
                            cout<<"YES"<<endl;
                            flag=1;
                            break;
                        }
                    }
                    if(flag)    break;
                }
                if(flag)    break;
            }
            if(flag)    break;
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}