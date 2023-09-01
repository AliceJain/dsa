#include "bits/stdc++.h"
using namespace std;
const int N = 1e3+2, MOD=1e9+7;
int val[N], wt[N];
int dp[N];

// int lis(vector<int> a, int n){
//     vector<int> lis(n);
//     lis[0]=1;
//     for(int i=1; i<n; i++){
//         lis[i]=1;
//         for(int k=0; k<i; k++){
//             if(a[k]<a[i])
//               lis[i]=max(lis[i], lis[k]+1);
//         }
//     }
//     int res=lis[0];
//     for(int i=1; i<n; i++){
//         res=max(res, lis[i]);
//     }
//     return res;
// }

// int main(){    //memoization
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     cout<<lis(a,n-1)<<endl;
//     return 0;
// }

int main(){    //tabulation
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> dp(n,1);
    int ans=0;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(a[j]<a[i])
              dp[i]=max(dp[i], 1+dp[j]);
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
    return 0;
}




