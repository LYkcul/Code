/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:B.square
    Date:2022/05/03
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
const int MOD=998244353;

inline LL read(){
    LL x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=(x<<3)+(x<<1)+(ch^48);ch=getchar();}
    return x*f;
}

LL n;
LL ans;

bool check(int t){
    double a=sqrt(t);
    int x=a;
    if(x==a){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    freopen("square.in","r",stdin);
    freopen("square.out","w",stdout);
    n=read();
    for(int i=1;i<=n;i++){
        if(check(i)){
            ans=(ans%MOD+(n-i+1)*i%MOD)%MOD;
        }
    }
    printf("%lld",ans);
    return 0;
}