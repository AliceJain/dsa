#include "bits/stdc++.h"
using namespace std;
int airthmeticSubarray(int arr[], int n){
    int pd=arr[1]-arr[0];
    int ans=2;
    int curr=2;
    for(int i=2; i<n; i++){
        if(arr[i]-arr[i-1]==pd)
            curr++;
        else{
            pd=arr[i]-arr[i-1];
            curr=2;
        }
        ans=max(ans,curr);
        }
    return ans;
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    cout<<airthmeticSubarray(arr, n)<<endl;;
    
    return 0;
}