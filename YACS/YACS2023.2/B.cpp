#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
	cin >> s;
	int n = s.length();
	int c1 = 0, c2 = 0;
	for (int i = 0; i < n; i ++ )
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			c1 ++ ;
		else
			c2 ++ ;
	}
	cout << min(c1, c2) << endl;
	return 0;
}

