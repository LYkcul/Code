#include <iostream>
using namespace std;
typedef long long LL;

string s = "314159265358979323846264338327";

void solve()
{
	string t;
	cin >> t;
	int res = 0;
	for (int i = 0; i < t.length(); i ++ )
	{
		if (t[i] == s[i])
			res ++ ;
		else
			break;
	}
	cout << res << "\n";
}

int main()
{
	int T; cin >> T;
	while (T -- )	solve();
	return 0;
}
