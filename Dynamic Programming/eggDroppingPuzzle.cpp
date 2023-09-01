#include "bits/stdc++.h"
using namespace std;

int res(int e, int f){
    vector<vector<int>> dp(f+1, vector<int>(e+1, INT_MAX));
    for(int i=1; i<=e; i++){
        dp[1][i]=1;
        dp[0][i]=0;
    }
    for(int i=1; i<=f; i++){
        dp[i][1]=i;
    }
    for(int i=2; i<=f; i++){
        for(int j=2; j<=e; j++){
            for(int x=1; x<=i; x++)
            dp[i][j]=min(dp[i][j], 1+max(dp[x-1][j-1], dp[i-x][j]));
        }
    }
    return dp[f][e];
}
int main(){    
    int e=2, f=10;
    cout<<res(e,f)<<endl;
    return 0;
}




