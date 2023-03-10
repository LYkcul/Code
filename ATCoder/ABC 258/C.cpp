/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:C.Rotation
    Date:2022/07/02
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

int n,q;
string s;
int op, x, xt;

int main(){
    scanf("%d%d",&n,&q);
    cin >> s;
    for(int i = 1; i <= q; ++i){
        scanf("%d%d",&op,&x);
        if(op == 1){
            xt += x;
        }
        else{ 
            xt%=n;
            if(xt > x){
                printf("%c\n",s[n-1-xt+x]);
            }
            else if(xt < x){
                printf("%c\n",s[x - xt - 1]);
            }
            else{
                printf("%c\n",s[n-1]);
            }
        
        }
    }
    return 0;
}