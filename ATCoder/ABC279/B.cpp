#include <bits/stdc++.h>
using namespace std;

string a, b;

int main()
{
    getline(cin, a);
    getline(cin, b);
    if (a.length() < b.length())    cout << "No";
    else if (a.find(b) != a.npos)   cout << "Yes";
    else    cout << "No";
    return 0;
}