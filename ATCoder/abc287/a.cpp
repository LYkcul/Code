#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int a, b;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> s;
		if (s[0] == 'F')
			a ++ ;
		else
			b ++ ;
	}
	string res =  (a > b) ? "Yes" : "No";
	cout << res;
	return 0;
}
