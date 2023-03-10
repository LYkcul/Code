// /*
// ========= Black_Panda =========
//     Author:Black_Panda
//     Problem:A
//     Date:2022/06/19
// ========= Black_Panda =========
// */
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// ll n;
// ll a,b,sum;
// ll ans=0;

// int main(){
//     std::ios::sync_with_stdio(false);
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a>>b;
//         ans=0;
//         if(a==1 && b==1){
//             cout<<1<<endl;
//         }
//         else if(a==1 || b==1){
//             a=max(a,b);
//             ans=(a+1)*a/2;
//             cout<<ans<<endl;
//         }
//         else{
//             ans=(1+b)*b/2;
//             if(a>b)
//                 sum=min(a,b);
//             else   
//                 sum=min(a,b)-1;
//             for(int j=1;j<=sum;j++){
//             ans+=(j+1)*b;
//             }
//             cout<<ans<<endl;
//         }
//     }
//     return 0;
// }

/*
========= Black_Panda =========
    Author:Black_Panda
    Problem:A
    Date:2022/06/19
========= Black_Panda =========
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n;
ll a,b,sum;
ll ans=0;

int main(){
    std::ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        ans=(b*(b-1))/2+(b+a*b)*a/2;
        cout<<ans<<endl;
    }
    return 0;
}