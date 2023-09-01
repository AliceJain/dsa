#include "bits/stdc++.h"
using namespace std;

int main(){    //tabulation
    int n=3;
    int val=30;
    vector<int> coins={25, 10, 5};
    vector<int> dp(val+1, INT_MAX);
    dp[0]=0;
    for(int i=1; i<=val; i++){
        for(int j=0; j<n; j++){
            if(coins[j]<=i){
                int subRes=dp[i-coins[j]];
                if(subRes!=INT_MAX)
                  dp[i]=min(dp[i], subRes+1);
            }
        }
    }
    cout<<dp[val]<<endl;
    return 0;
}






