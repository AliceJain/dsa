#include "bits/stdc++.h"
using namespace std;

int minSubarraySize(int arr[], int n, int x){
    int sum=0, minLen=n+1, start=0, end=0;
    while(end<n){
        while(sum<=x && end<n)
          sum+=arr[end++];
        while(sum>x && start<n){
        if(end-start<minLen)
           minLen=end-start;
        sum-=arr[start++];
        }
    }
    return minLen;
}

int main(){
    int arr[]={2,3,1,2,4,3};
    int x=7;
    cout<<minSubarraySize(arr,6,x);
    return 0;
}