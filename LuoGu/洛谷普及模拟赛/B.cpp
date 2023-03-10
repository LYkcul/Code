#include <bits/stdc++.h>
using namespace std;

int t;
string a, b;

int main()
{
	cin >> t;
	while (t -- )
	{
		cin >> a >> b;
		if (a.length() == 1)
		{
			if (b.length() != 1)
				cout << "N\n";	
			else
				cout << "Y\n";
		}
		else if (b.length() == 1)
		{
			cout << "Y\n";
		}
		else
		{
			cout << "N\n";
		}
	}
	return 0;
}

