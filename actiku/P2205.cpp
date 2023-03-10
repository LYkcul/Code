#include <bits/stdc++.h>
using namespace std;
long long x, y;
map<long long, long long> f;
long long dfs(long long y)
{
	if (y == x)	return 0;
	if (y < x) return x - y;	
	if (f.find(y) != f.end())	return f[y];
	if (y % 2 != 0) return f[y] = min(dfs(y + 1), dfs(y - 1)) + 1;
	else return f[y] = min(dfs(y / 2) + 1, y - x);
}
int main()
{
	cin >> x >> y;
	cout << dfs(y);
	return 0;
}