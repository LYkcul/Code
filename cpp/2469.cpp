
/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:http://noi.openjudge.cn/ch0406/2469/
    Date:2022/06/04
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

//贪心

int n;
int a[1005];

int main(){
    std::ios::sync_with_stdio(false);
    while(cin>>n){  
        int sum=0,maxx=-1;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
            maxx=max(maxx,a[i]);
        }
        if((sum-maxx)<maxx){
            printf("%.1lf\n",(sum-maxx)*1.0);
        }
        else{
            printf("%.1lf\n",(sum-maxx-maxx)/2.0+maxx);
        }
    }
    return 0;
}