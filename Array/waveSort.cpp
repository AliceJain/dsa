#include"bits/stdc++.h"
using namespace std;
void wavesort(int *arr, int n){
    for(int i=1; i<n;i+=2){
        if(arr[i]>arr[i-1])
           swap(arr[i], arr[i-1]);
        if(arr[i]>arr[i+1] && i<=n-2){
            swap(arr[i], arr[i+1]);
        }
    }
}
int main(){
    int a[]={1,3,4,7,5,6,2};
    wavesort(a,7);
    for(int i=0; i<7; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}