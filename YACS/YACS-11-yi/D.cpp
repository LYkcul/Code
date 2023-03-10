#include <iostream>
#include <cstring>
#include <queue>
#include <utility>
using namespace std;
const int N=5e5+5,M=5e5+5;

int n,m,qq,dis[N],vis[N];
int head[N],to[M],nxt[M],val[M],cnt;
priority_queue<pair<int,int> >q;

void add(int u,int v,int w){
	to[++cnt]=v;
	val[cnt]=w;
	nxt[cnt]=head[u];
	head[u]=cnt;
}

void dijkstra(int s){
	memset(dis,0x3f,sizeof(dis));
	dis[s]=0;
    while (!q.empty())    q.pop();
    memset(vis,0,sizeof(vis));
	q.push(make_pair(0,s));
	while(!q.empty()){
		int u=q.top().second;
		q.pop();
		if(vis[u])	continue;
		vis[u]=true;
		for(int i=head[u];i;i=nxt[i]){
			int v=to[i],w=val[i];
			if(dis[v]>dis[u]+w){
				dis[v]=dis[u]+w;
				q.push(make_pair(-dis[v],v));
			}
		}
	}
}

int ttt(string s)
{
	int l = s.length();
	int res = 0;
	for (int i = 0; i < l; i ++ )
	{
		if (s[i] >= '0' && s[i] <= '9')
			res = res * 10 + int(s[i] - '0');
	}
	return res;
}

int main(){
	cin>>n>>qq;
    while (qq -- )
    {
        int x, y;
        string s;
        cin >> x >> y;
        getline(cin, s);
		if (s.length() == 0)
        {
            dijkstra(x);
            if (dis[y] == 1061109567)	dis[y] = -1;
			cout<<dis[y]<<endl; 
        }
        else{
            int c;
            c = ttt(s);
            add(x,y,c);
		    add(y,x,c);
        }
    }
	return 0;
}

