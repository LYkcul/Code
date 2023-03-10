/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:A
    Date:2022/06/14
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

long long t;
long long a,b,c,d;

int main(){
    std::ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        long long ans=0;
        if(b>a) ans++;
        if(c>a) ans++;
        if(d>a) ans++;
        cout<<ans<<endl;
    }
    return 0;
}