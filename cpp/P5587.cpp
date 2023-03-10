#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 100000+5

string s1[N],s2;
int t;
int ans;
int c1,c2;
string sta[N],stb[N];

int main(){
    std::ios::sync_with_stdio(false);
    for(;;c1++){
        getline(cin, s1[c1]);
        if(s1[c1] == "EOF") break;
    }
    int tt = 0;
    for(;;tt++){
    	getline(cin, s2);
    	if(s2 == "EOF")	break;
    	c2 = s2.length();
    	c1 = s1[tt].length();
	    int t1 = 0, t2 = 0;
for(int i = 0; i < c2; ++i){
            if(s2[i] == '<'){
                t2--;
                t2 = max(t2, 0);
            }
            else stb[t2++] = s2[i];
        }
        for(int i = 0; i < c1; ++i){
            if(s1[tt][i] == '<'){
                t1--;
                t1 = max(t1, 0);
            }
            else sta[t1++] = s1[tt][i];
        }
		for(int i = 0; i < min(t1, t2); i++){
			if(sta[i] == stb[i])	ans++;
		}
	}
	cin >> t;
	cout << ans*60/t;
    return 0;
}