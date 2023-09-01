#include"bits/stdc++.h"
using namespace std;
void dnfsort(int *arr, int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    } 
}
int main(){
    int a[]={0,1,1,0,0,1,2,2,1,2};
    dnfsort(a,10);
    for(int i=0; i<10; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}