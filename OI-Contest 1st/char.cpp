/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:A.char
    Date:2022/05/03
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

struct Node{
    char c;
    int id;
};

string s;
queue<Node> q1,q2;
int x=0x3f3f3f3f,y=-0x3f3f3f3f;
int vis[50];

int main(){
    freopen("char.in","r",stdin);
    freopen("char.out","w",stdout);
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++){
        Node r={s[i],i+1};
        q1.push(r);
        q2.push(r);
    }
    for(int i=0;i<len;i++){
        Node f;
        f=q1.front();
        q1.pop();
        if(vis[f.c-'a'+1] == 0){
            vis[f.c-'a'+1]=f.id;
        }
        else{
            int tx=f.id-vis[f.c-'a'+1];
            vis[f.c-'a'+1]=f.id;
//            printf("tx:%d\n",tx);
            x=min(x,tx);
        }
    }
    memset(vis,0,sizeof(vis));
    for(int i=0;i<len;i++){
        Node f;
        f=q2.front();
        q2.pop();
        if(vis[f.c-'a'+1] == 0){
            vis[f.c-'a'+1]=f.id;
        }
        else{
            int tx=f.id-vis[f.c-'a'+1];
//            printf("tx:%d\n",tx);
            y=max(y,tx);
        }
    }
    if(y<x) printf("-1");
    else    printf("%d %d",x,y);
    return 0;
}