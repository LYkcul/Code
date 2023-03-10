#include <bits/stdc++.h>
using namespace std;

int h, w, n, H, W;
int a[305][305];
int vis[305];
int res;

int main()
{
	cin >>H>>W>>n>>h>>w;
	for (int i=1;i<=H;i++)
		for (int j=1;j<=W;j++)
		{
			cin>>a[i][j];
			if (!vis[a[i][j]])
			{
				vis[a[i][j]] =1;
				res ++ ;
			}
		}
	for (int i=1;i<=H;i+=h)
	{
		for (int j = 1; j <= W; j +=w)
		{
			int cnt = 0;
			memset(vis, 0, sizeof(vis));
			for (int z=1;z<=i;z++)
				for (int k=1;k<=j;k++)
				{
					if (!vis[a[z][k]])
					{
						cnt ++ ;
						vis[a[z][k]] = 1;
					}
				}
			cout << res - cnt << " ";
		}
	}
	return 0;
}

