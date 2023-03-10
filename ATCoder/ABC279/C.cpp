#include <bits/stdc++.h>
using namespace std;

#define ll long long

int h, w;
string a[400005], b[400005];
string t1[400005], t2[400005];
map<string, ll> f1, f2;
map<string, ll>::iterator it1, it2;

int main()
{  
    scanf("%d%d", &h, &w);
    for (int i = 0; i < h; i ++ )  cin >> a[i];
    for (int i = 0; i < h; i ++ )  cin >> b[i];

    for (int i = 0; i < w; i ++ )
    {
        for (int j = 0; j < h; j ++ )
            t1[i] += a[j][i];
        f1[t1[i]] += 1;
    }

    for (int i = 0; i < w; i ++ )
    {
        for (int j = 0; j < h; j ++ )
            t2[i] += b[j][i];
        f2[t2[i]] += 1;
    }
    for(it1=f1.begin(),it2=f2.begin();
    it1!=f1.end(),it2!=f2.end();it1++,it2++)
    {
         //cout << it1->second << " " << it2->second << endl;
        if (it1->second != it2->second || it1->first != it2->first)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}