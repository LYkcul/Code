#include <bits/stdc++.h>
using namespace std;

int n;
long long tmp = 1, res = 1;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		res = i * tmp;
    	tmp = res;
	}
	cout << res << endl;
	return 0;
}
