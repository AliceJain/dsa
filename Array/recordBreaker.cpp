#include "bits/stdc++.h"
using namespace std;
int recordbreaker(int arr[], int n){
    int count=0;
    int maxi=arr[0];
    int m=arr[0];
    if(arr[0]>arr[1])
       count++;
    for(int i=1; i<n-1; i++){
        maxi=max(arr[i], maxi);
        if(arr[i]==maxi && (arr[i]>arr[i+1])){
            count++;
        }
        }
    for(int i=0; i<n; i++){
        if(arr[i]>m)
             m=arr[i];
    }
    if(arr[n-1]==m){
            count++;
        }    

    return count;
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    cout<<recordbreaker(arr, n)<<endl;;
    
    return 0;
}