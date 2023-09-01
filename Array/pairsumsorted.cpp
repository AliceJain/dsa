#include <iostream>
#include<climits>
using namespace std;
bool pairsum(int arr[], int n, int sum){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==sum){
            cout<<low<<" "<<high;
            return true;
        }
        else if(arr[low]+arr[high]<sum){
        low++;
        }
        else{
        high--;
        }
    }
    return false;
    }

int main(){
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    pairsum(arr, n, sum);
    
    return 0;
}
