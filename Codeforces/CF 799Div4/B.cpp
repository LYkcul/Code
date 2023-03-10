/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:B
    Date:2022/06/14
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

set<int> s;

long long t,n,x;

int main(){
    std::ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        s.clear();
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>x;
            s.insert(x);
        }
        if(n%2==0){
            cout<<s.size()<<endl;
        }
        else{
            if(s.size()%2==0)
                cout<<s.size()-1<<endl;
            else
                cout<<s.size()<<endl;
        }
    }
    return 0;
}