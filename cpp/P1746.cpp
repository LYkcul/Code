/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:P1746 离开中山路
    Date:2022/05/02
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;

struct Node{
    int x,y,step;
};

inline int read(){
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=(x<<3)+(x<<1)+(ch^48);ch=getchar();}
    return x*f;
}

int n;
char mp[N][N];
int nx,ny,ex,ey;

int xx[]={1,0,-1,0};
int yy[]={0,1,0,-1};

void bfs(int x,int y,int step){
    queue<Node> q;
    Node f,r;
    r={x,y,0};
    q.push(r);
    mp[x][y]='1';
    while(!q.empty()){
        f=q.front();
        q.pop();
        if(f.x==ex && f.y==ey){
            printf("%d\n",f.step);
            return ;
        }
        for(int i=0;i<4;i++){
            int dx=f.x+xx[i];
            int dy=f.y+yy[i];
            if(dx<0 || dx>n || dy<0 || dy>n || mp[dx][dy]=='1'){
                continue;
            }
            r={dx,dy,f.step+1};
            q.push(r);
            mp[dx][dy]='1';
        }
    }
}

int main(){
    n=read();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>mp[i][j];
        }
    }
    cin>>nx>>ny>>ex>>ey;
    bfs(nx,ny,0);
    return 0;
}