#include<iostream>
using namespace std;
void insertionsort(int arr[], int n){
    int j;
    for(int i=1; i<n; i++){
        int current=arr[i];
        for(j=i-1; j>=0 && arr[j]>current; j--){
            arr[j+1]=arr[j];
            }
            arr[j+1]=current;
        }
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    insertionsort(arr, n);
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
}