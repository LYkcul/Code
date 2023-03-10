/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:luogu.com.cn/problem/P1966
    Date:2022/06/03
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

const int mod=1e8-3;

inline int read(){
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=(x<<3)+(x<<1)+(ch^48);ch=getchar();}
    return x*f;
}

struct qr{
    int val,id;
}a[100010],b[100010];

bool cmp(qr x,qr y){
    if(x.val == y.val)  return x.id<y.id;
    return x.val<y.val;
}

int c[100010],tree[100010];

int lowbit(int x){
    return x&(-x);
}
void add(int x,int n){
    for(;x<=n;x+=lowbit(x)){
        tree[x]++;
    }
}

int ask(int x){
    int s=0;
    for(;x>0;x-=lowbit(x))
        s+=tree[x];
    return s;
}

int main(){
    int n;
    long long ans=0;
    n=read();
    for(int i=1;i<=n;i++)   a[i].val=read();
    for(int i=1;i<=n;i++)   b[i].val=read();
    for(int i=1;i<=n;i++)   a[i].id=b[i].id=i;
    sort(a+1,a+n+1,cmp);
    sort(b+1,b+n+1,cmp);
    for(int i=1;i<=n;i++)   c[b[i].id]=a[i].id;
    for(int i=1;i<=n;i++){
        add(c[i],n);
        ans=(ans+i-ask(c[i]))%mod;
    }
    cout<<ans;
    return 0;
}