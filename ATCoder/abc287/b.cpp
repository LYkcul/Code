#include <bits/stdc++.h>
using namespace std;

int n, m;
string s1[1005], s2[1005];
int res;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
		cin >> s1[i];
	for (int i = 1; i <= m; i ++ )
		cin >> s2[i];
	for (int i = 1; i <= n; i ++ )
	{
		string str = s1[i].substr(s1[i].length() - 3, 3);
		for (int j = 1; j <= m; j ++ )
		{
			if (str == s2[j])
			{
				res ++ ;
				break;
			}
		}
	}
	cout << res;
	return 0;
}
