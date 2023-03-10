/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:P1318
    Date:2022/06/15
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

int n;
int a[10005];
int l[10005],r[10005];
int ans;

int main(){
    std::ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        l[i]=max(l[i-1],a[i]);
    }
    for(int i=n;i>=1;i--){
        r[i]=max(r[i+1],a[i]);
    }
    for(int i=1;i<=n;i++){
        if(min(l[i],r[i]) - a[i] >= 0)
            ans+=min(l[i],r[i]) - a[i];
    }
    cout<<ans;
    return 0;
}