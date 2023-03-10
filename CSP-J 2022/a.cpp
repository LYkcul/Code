#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int t = pow(a, b);
	if (t < 0 || t > 1000000000)
		cout << "-1";
	else
		cout << t; 
	return 0;
}