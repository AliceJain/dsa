#include "bits/stdc++.h"
#include<cmath>
using namespace std;

int smallestSubsequence(vector<int> arr, int n, int k){
    priority_queue<int, vector<int>> pq;
    int sum=0, cnt=0;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
    while(!pq.empty() ){
        sum+=pq.top();
        pq.pop();
        cnt++;
        if(sum>=k)
           break;
    }
    if(sum<k)
       return -1;
    return cnt;
}

int main(){
    vector<int> arr = {1,1,3,2,8};
    int k=13;
    cout<<smallestSubsequence(arr,5,k);

    return 0;
}