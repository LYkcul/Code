/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:1156(actiku.com)
    Date:2022/06/03
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

int t;
int n,a[50005];

int main(){
    std::ios::sync_with_stdio(false);
    cin>>t;
    while (t--){
        map<int,bool> mp;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            if(!mp[a[i]]){
                cout<<a[i]<<" ";
                mp[a[i]]=1;
            }
        }
        cout<<endl;
    }    
    return 0;
}
//http://actiku.com/p/P1156