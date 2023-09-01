#include "bits/stdc++.h"
using namespace std;

int minJumps(vector<int> &a, int n){
    vector<int> dp(n, INT_MAX);
    dp[0]=0;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(j+a[j]>=i){
                if(dp[j]!=INT_MAX)
                    dp[i]=min(dp[i], dp[j]+1);
            }
        }
    }
    return dp[n-1];
}
int main(){    
    int n=6;
    vector<int> a={3,4,2,1,2,1};
    cout<<minJumps(a,n)<<endl;
    return 0;
}




