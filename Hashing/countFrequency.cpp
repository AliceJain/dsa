#include "bits/stdc++.h"
#include<cmath>
using namespace std;

void countFreauency(vector<int> &a, int n){
    unordered_map<int, int> freq;
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }
    unordered_map<int, int> :: iterator it;
    for(it=freq.begin(); it!=freq.end(); it++){
        cout<<it->first <<" "<<it->second<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    
    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    countFreauency(arr,n);

    return 0;
}