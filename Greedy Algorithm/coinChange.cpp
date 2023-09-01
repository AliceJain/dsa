#include "bits/stdc++.h"
using namespace std;

int countDenominations(vector<int> &v, int x){
    sort(v.begin(), v.end(), greater<int>());
    int ans=0;
    for(int i=0; i<v.size(); i++){
        ans+=x/v[i];
        x-=x/v[i]*v[i];
    }
    return ans;
}

int main(){
    vector<int> v={1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int k=350;
    cout<<countDenominations(v,k)<<endl;
    return 0;
}