#include <bits/stdc++.h>
using namespace std;

string s = "codeforces";

int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		string st;
		cin >> st;
		if (s.find(st) != -1)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}
