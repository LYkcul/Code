/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:C. Train and Queries
    Date:2022/07/10
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define N 200005

int tt;
int n, k;
int a[N], b[N], t[N];
map<int, int> u;

int main(){
    std::ios::sync_with_stdio(false);
    cin >> tt;
    while(tt--){
    	map<long long,long long> vis;
        map<long long,long long> u;
        cin >> n >> k;
        for(int i = 1; i <= n; ++i){
            cin >> t[i];
            if(u.find(t[i]) != u.end()){
			}
			else{
				u[t[i]] = i;
			}
        }
        //cout << "---" << u[1] << endl;;
        for(int i = n; i >= 1; --i){
            if(vis.find(t[i]) == vis.end()){
                vis[t[i]] = i;
            }
        }
        //cout << "---" << vis[2] << endl;;
        for(int i = 1; i <= k; ++i){
            cin >> a[i] >> b[i];
            if(u.find(a[i]) != u.end() && u.find(b[i]) != u.end()){
                if(u[a[i]] <= vis[b[i]])    cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

#define N 200005

int t;
int n, k;
int a, b;
string u;

int main(){
    std::ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        cin >> n >> k;
        char c;
        cin >> c;
		getline(cin, u);
        u=c+u;
		//cout << u << endl;
        for(int i = 1; i <= k; ++i){
        	cin >> a >> b;
			string ta,tb;
			ta[0]=char(a+48);
			tb[0]=char(b+48);
			int ca = u.find(ta);
			int cb = u.find(tb);
			if(ca == u.npos || cb == u.npos){
				cout << "NO" << endl;
			}
			else{
				if(ca < cb)	cout << "YES" << endl;
				else	cout << "NO" << endl;
			}
		}
//        for(int i = 1; i <= n; ++i){
//            cin >> u[i];
//            if(mp.find(u[i]) != mp.end()){
//			}
//			else{
//				mp[u[i]] = i;
//			}
//        }	
//        for(int i = 1; i <= k; ++i){
//        	cin >> a[i] >> b[i];
//        	if(mp.find(a[i]) != mp.end() && mp.find(b[i]) != mp.end()){
//        		if(mp[a[i]] <= mp[b[i]]){
//        			cout << "YES" << endl; 
//				}
//				else{
//					cout << "NO" << endl;
//				}
//			}
//			else{
//				cout << "NO" << endl;
//			}
//		}
//        for(int i = 1; i <= k; ++i){
//            cin >> a[i] >> b[i];
//            bool flag = 0, cc = 1;
//            for(int j = 1; j <= n; ++j){
//                if(u[j] == a[i]){
//                    cc = 0;
//                }
//                if(u[j] == b[i] && !cc){
//                    cout << "YES" << endl;
//                    flag = 1;
//                    break;
//                }
//            }
//            if(!flag)   cout << "NO" << endl;
//        }
    }
    return 0;
}
*/