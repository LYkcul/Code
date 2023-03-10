/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:
    Date:2022/07/
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000005
#define s(a); scanf("%d",&a);

ll n,m;
ll a[N],b[N];
unsigned ll ans,anss;
bool flag=1;

int main(){
    freopen("city.in","r",stdin);
    freopen("city.out","w",stdout)
    s(n);
    s(m);
    for(int i = 1; i <= n; ++i){
        s(a[i]);
        ans += a[i];
        if(m <= ans && flag){
            anss = i;
            flag=0;
        }
    }
    for(int i = 1; i <= anss; ++i){
        s(b[i]);
    }
    cout << b[anss];
    return 0;
}