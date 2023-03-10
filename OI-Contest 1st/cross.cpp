/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:C.cross
    Date:2022/05/03
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;
const int N=1005;

struct Node{
    int x,y,ans;
};

inline int read(){
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=(x<<3)+(x<<1)+(ch^48);ch=getchar();}
    return x*f;
}

int n,l1,l2;
int mp[N][N];

int xx[]={0,0,1,-1};
int yy[]={1,-1,0,0};

void bfs(int x,int y,int ans){
    Node f,r;
    r={x,y,ans};
    queue<Node> q;
    q.push(r);

    while(!q.empty()){
        f=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int dx=f.x+xx[i];
            int dy=f.y+yy[i];
            if(dx<0 || dy<0) continue;
            for(int j=dx-l1;j<=dx+l1;j++){
                for(int k=dy-l2;k<=dy+l2;k++){
                    ans+=mp[j][k];
                }
            }
            f.ans=max(ans,f.ans);
            r={dx,dy,f.ans};
            q.push(r);
        }
    }
    cout<<f.ans;
}

int x,y,v;

int main(){
    freopen("cross.in","r",stdin);
    freopen("cross.out","w",stdout);
    n=read();l1=read();l2=read();
    for(int i=1;i<=n;i++){
        x=read();y=read();v=read();
        mp[x][y]=v;
    }
	bfs(1,1,0);
    return 0;
}

