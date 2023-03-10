#include <bits/stdc++.h>
using namespace std;

#define int long long

int t,n,l,r,x,k;
int tx,ty;
int ndw=1; //现在的挡位
int ans;
int nzs; //现在的转速

signed main(){
    scanf("%lld%lld%lld%lld%lld%lld",&t,&n,&l,&r,&x,&k);
    nzs = l;
    int cnt=0;
    for(int i = 1;i <= t; ++i){
        scanf("%lld%lld",&tx,&ty);
        if(tx == 0){ //升档
            if(ndw >= n){
                printf("-1\n");
                return 0;
            }
            nzs = l;
            ndw++;
        }
        if(tx == 1){    //降档
            if(ndw <= 1){
                printf("-1\n");
                return 0;
            }
            nzs = r;
            ndw--;
        }
        if(ty == 1){    //踩油门
            nzs+=x;
            nzs = min(nzs,r);
        } 
        ans += nzs * ndw;
        if(nzs == r){
            cnt++;
            if(cnt == k){
                break;
            }
        }
        else{
            cnt = 0;
        }
        //cout << "第" << i << "秒" << "转速为" << nzs << endl;

    }
    printf("%lld\n",ans);
    return 0;
}