#include <bits/stdc++.h>
using namespace std;

#define LL long long 

LL n;
string res;

char f(int x)
{
	return char(x + '0');
}

void solve()
{
	while (n != 0)
	{
		int tmp = n % (-2);
		if (tmp == -1)
		{
			res.push_back('1');
			n = n / (-2) + 1;
		}
		else
		{
			res.push_back(f(tmp));
			n = n / (-2);
		}
	}
	reverse(res.begin(), res.end());
	cout << res << endl;
	return ; 
}

int main()
{
	cin >> n;
	if (n == 0)
	{
		cout << 0 << "\n";
		return 0;
	}
	solve();
	return 0;
}

