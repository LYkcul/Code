/*
	Name: A
	Author: Black-Panda 
	Date: 20/11/22 13:34
*/
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100005]; 
map<int, int> mp;
int tmp, res;
bool vis[100005];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
		if (mp.find(a[i]) == mp.end()) mp[a[i]] = i;
	}
	
	for (int i = n; i >= 1; i -- )
	{
		if (mp[a[i]] == i)	res += tmp;
		if (!vis[a[i]])	tmp ++ ;
		vis[a[i]] = 1;
	}
	cout << res << endl;
	return 0;
}

