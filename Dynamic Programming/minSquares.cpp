#include "bits/stdc++.h"
using namespace std;
const int N = 1e5+2, MOD=1e9+7;
int dp[N];

// int minSquare(int n){   //memoization
//     if(n==0 || n==1|| n==2|| n==3)
//        return n;
//      if(dp[n]!=MOD)
//        return dp[n];
//     for(int i=1; i*i<=n; i++){
//         dp[n]=min(dp[n], 1+minSquare(n-i*i));
//     } 
//     return dp[n];
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<N; i++)
//        dp[i]=MOD;
//     cout<<minSquare(n)<<endl;
//     return 0;
// }

int main(){    //tabulation
    int n;
    cin>>n;
    vector<int> dp(n+1, INT_MAX);
    dp[0]=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j*j<=n; j++){
            if(i-j*j>=0)
            dp[i]=min(dp[i], 1+dp[i-j*j]);

        }
    }
    cout<<dp[n]<<endl;
    return 0;
}