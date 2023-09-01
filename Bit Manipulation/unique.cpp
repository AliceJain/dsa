#include<iostream>
using namespace std;
int unique(int arr[], int n){
    int num=0;
        for(int i=0; i<n; i++){
            num=num^arr[i];
        }
        return num;
    }


int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
     cin>>arr[i];
    }
   cout<<(arr,n);
   return 0;
}