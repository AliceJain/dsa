#include <iostream>
#include<climits>
using namespace std;
int kadane(int arr[], int n){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0; i<n; i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(currsum, maxsum);
    }
    return maxsum;
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    cout<<kadane(arr, n);
    
    return 0;
}
