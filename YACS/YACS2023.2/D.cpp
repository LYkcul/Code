#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
        sum += x;
    }
    if(sum % 2 != 0){
        cout << "No" << endl;
    }
    else{
        int half = sum / 2;
        vector<vector<int>> dp(n+1, vector<int>(half+1, 0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=half;j++){
                if(j < a[i-1]){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    if(dp[i-1][j] == 0 && dp[i-1][j-a[i-1]] == 0){
                        dp[i][j] = 0;
                    }
                    else{
                        dp[i][j] = 1;
                    }
                }
            }
        }
        if(dp[n][half] == 1){
            cout << "Matched" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
