/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:E
    Date:2022/06/14
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

int t;
int n,s;
int a[20005];

int main(){
    std::ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        int sum=0;
        cin>>n>>s;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum < s){
            cout<<-1<<endl;
            continue;
        }
        if(sum == s){
            cout<<0<<endl;
            continue;
        }
        int sum1=0,a;
        for(int i=1;i<=n;i++){
            sum1+=a[i];
            if(sum1 == s){
                a=i;
                break;
            }
        }
        int sum2=0,b;
        for(int i=n;i>=1;i--){
            sum2+=a[i];
            if(sum2 == s){
                b=i;
                break;
            }
        }
        cout<<min()
    }
    return 0;
}