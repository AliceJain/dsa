#include "bits/stdc++.h"
using namespace std;
const int N = 1e3+2;
int dp[N][N];

// int lcs(string &s1, string &s2, int m, int n){
//     if(m==0 || n==0)
//        return 0;
//     if(dp[m][n]!=-1)
//        return dp[m][n];
//     if(s1[m-1]==s2[n-1])
//         dp[m][n]= 1+lcs(s1,s2,m-1, n-1);
//     else
//         dp[m][n]= max(lcs(s1,s2,m-1,n), lcs(s1,s2,m,n-1));
//     return dp[m][n];
//     }

// int main(){    //memoization
//     for(int i=0; i<N; i++){
//         for(int j=0; j<N; j++){
//             dp[i][j]= -1;
//         }
//     }
//     string s1, s2;
//     cin>>s1>>s2;
//     int m=s1.size(), n=s2.size();
//     cout<<lcs(s1,s2,m,n)<<endl;
//     return 0;
// }

int main(){    //tabulation
    string s1, s2;
    cin>>s1>>s2;
    int m=s1.size(), n=s2.size();
    vector<vector<int>> dp(m+1, vector<int> (n+1, -1));
    for(int i=0; i<m+1; i++){
        for(int j=0; j<n+1; j++){
            if(i==0 || j==0){
            dp[i][j]= 0;
            continue;
            }
            if(s1[i-1]==s2[j-1])
               dp[i][j]= 1+dp[i-1][j-1];
            else
               dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    cout<<dp[m][n]<<endl;
    return 0;
}






