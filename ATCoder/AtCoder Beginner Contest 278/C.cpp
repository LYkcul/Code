#include <bits/stdc++.h>
using namespace std;

int n, q;
int t, a, b;
map<int, map<int, bool> > mp;  

int main()
{
	cin >> n >> q;
	while (q -- )
	{
		cin >> t >> a >> b;
		if (t == 1)
		{
			mp[a][b] = 1;
		}
		else if (t == 2)
		{
			mp[a][b] = 0;
		}
		else if (t == 3)
		{
			if (mp[a][b] == 1 && mp[b][a] == 1)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
	return 0;
}

