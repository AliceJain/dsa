#include "bits/stdc++.h"
using namespace std;

int strategy(vector<int> &a, int n){
    vector<vector<int>> dp(n, vector<int>(n));
    for(int i=0; i<n-1; i++){
        dp[i][i+1]=max(a[i], a[i+1]);
    }
    for(int gap=3; gap<n; gap=gap+2){
        for(int i=0; i+gap<n; i++){
            int j=i+gap;
            dp[i][j]=max(a[i]+min(dp[i+2][j], dp[i+1][j-1]), a[j]+min(dp[i+1][j-1], dp[i][j-2]));
        }
    }
    return dp[0][n-1];
}
int main(){    
    int n=6;
    vector<int> a={20,5,4,6,8,3};
    cout<<strategy(a,n)<<endl;
    return 0;
}




