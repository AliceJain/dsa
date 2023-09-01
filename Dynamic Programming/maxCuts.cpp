#include "bits/stdc++.h"
using namespace std;
// const int N = 1e3+2;
// int dp[N];

// int maxCuts(int n, int a, int b, int c){
//     if(n<0)
//        return -1;
//     if(n==0)
//        return 0;
//     if(dp[n]!=-1)
//        return dp[n];
//     dp[n]= 1+max(max(maxCuts(n-a,a,b,c), maxCuts(n-b,a,b,c)), maxCuts(n-c,a,b,c));
//     return dp[n];
//     }

// int main(){    //memoization
//     for(int i=0; i<N; i++){
//         dp[i]=-1;
//     }
//     int n, a, b, c;
//     cin>>n>>a>>b>>c;
//     cout<<maxCuts(n,a,b,c)<<endl;
//     return 0;
// }

int main(){    //tabulation
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> dp(n+1, -1);
    dp[0]=0;
    for(int i=0; i<n; i++){
        if(i-a>=0)
          dp[i]=max(dp[i], dp[i-a]);
        if(i-b>=0)
          dp[i]=max(dp[i], dp[i-b]);
        if(i-c>=0)
          dp[i]=max(dp[i], dp[i-c]);
        if(dp[i]!=-1)
           dp[i]++;
        
    }
    
    cout<<dp[n]<<endl;
    return 0;
}






