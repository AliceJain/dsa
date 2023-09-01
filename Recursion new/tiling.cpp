#include"bits/stdc++.h"
using namespace std;
vector<vector<int>> ans;
int tileWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return (tileWays(n-1)+tileWays(n-2));
}

int32_t main(){
    int n;
    cin>>n;
    cout<<tileWays(n);
    return 0;
}