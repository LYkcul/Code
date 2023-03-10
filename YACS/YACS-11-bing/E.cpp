#include <bits/stdc++.h>
using namespace std;

int n;
string s;
int a[100005];
stack<int> s;

int main()
{
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i ++ )
	{
		a[i] = s[i] - 'a' + 1;
		s.push_back(a[i]);
	}
	
	return 0;
}

