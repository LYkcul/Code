#include <bits/stdc++.h>
using namespace std;

int n,a[1005],b[1005];
int ans[1005];

int main(){
    std::ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<n;i++){
        ans[i]=(a[i]%a[i+1])+(b[i]*b[i+1]);
    }
    ans[n]=a[n]+b[n];
    for(int i=1;i<=n;i++){
        ans[i]=(ans[i]+a[i])/b[i];
    }
    sort(ans+1,ans+n+1);
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}