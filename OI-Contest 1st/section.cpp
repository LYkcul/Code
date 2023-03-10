/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:D.section
    Date:2022/05/03
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

int n,a[100005],m;

int main(){
    freopen("section.in","r",stdin);
    freopen("section.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    long long ans=pow((1+n),2)*m;
    cout<<ans;
    return 0;
}