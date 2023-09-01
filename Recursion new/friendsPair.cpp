#include"bits/stdc++.h"
using namespace std;
vector<vector<int>> ans;
int friendsPair(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return (friendsPair(n-1)+friendsPair(n-2)*(n-1));
}

int32_t main(){
    int n;
    cin>>n;
    cout<<friendsPair(n);
    return 0;
}