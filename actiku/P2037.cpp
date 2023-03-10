#include <bits/stdc++.h>
using namespace std;

struct node
{
    int x, y, step, vol;
};

int n, m;
int mp[105][105];
int vis[105][105];
int sx, sy, ex, ey; //start:x,y end:x,y
int xx[] = {0, 0, -1, 1};
int yy[] = {1, -1, 0, 0};

bool check(int x, int y, int vol)
{
    return (x > 0 && x <= n && y > 0 && y <= m
     && mp[x][y] != 0 && vol > vis[x][y] + 1);
}

void bfs(int x, int y, int step, int vol)
{
    //memset(vis, -1, sizeof(vis));
    queue<node> Q;
    vis[x][y] = vol;
    node f, r;
    r = {x, y, step, vol};
    Q.push(r);
    while (!Q.empty())
    {
        f = Q.front();
        Q.pop();
        if (f.x == ex && f.y == ey && f.vol)
        {
            cout << f.step << endl;
            return ;
        }
        for (int i = 0; i < 4; i ++ )
        {
            int dx = f.x + xx[i];
            int dy = f.y + yy[i];
            if (!check(dx, dy, f.vol))
                continue;
            if (!vol)  
            {
                //cout << "-1";
                return ;
            }
            if (mp[dx][dy] == 4)  r = {dx, dy, f.step + 1, 6};
            else r = {dx, dy, f.step + 1, f.vol - 1};
            vis[dx][dy] = f.vol - 1;
            Q.push(r);
        }
    }
    cout << -1 << endl;
    return ;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i ++ )
    {
        for (int j = 1; j <= m; j ++ )
        {
            cin >> mp[i][j];
            if (mp[i][j] == 2)
                sx = i, sy = j;
            if (mp[i][j] == 3)
                ex = i, ey = j;
        }
    }
    bfs(sx, sy, 0, 6);
    return 0;
}