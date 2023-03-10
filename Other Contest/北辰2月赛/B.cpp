#include <bits/stdc++.h>
using namespace std;

int xa, ya, xb, yb;

void solve()
{
	cin >> xa >> ya >> xb >> yb;
	int xc, yc, xd, yd;
	xc = yb - ya;
	xc = xb - xc;
	yc = xa - xb;
	yc = yb - yc;
	xd = xa - (yb - ya);
	yd = ya - (xa - xb);
	cout << xc << " " << yc << " " << xd << " " << yd << endl;
	return ; 
}

int main()
{
	solve();
	return 0;
}

