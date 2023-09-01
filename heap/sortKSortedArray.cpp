#include "bits/stdc++.h"
#include<cmath>
using namespace std;

void sort(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<=k; i++){
        pq.push(arr[i]);
    }
    int index=0;
    for(int i=k+1; i<n; i++){
        arr[index++]=pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while(!pq.empty()){
        arr[index++]=pq.top();
        pq.pop();
    }
}

int main(){
    int arr[]={9,8,7,18,19,17};
    int k=2;
    sort(arr,6,k);
    for(auto i: arr)
      cout<<i<<" ";
    cout<<endl;
    

    return 0;
}