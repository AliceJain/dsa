#include <iostream>
#include <limits.h>
using namespace std;
int missingnumber(int arr[], int n){
    const int N=1e6+2;
    bool check[N];
    for(int i=0; i<n; i++){
        check[i]=false;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
           check[arr[i]]=true;
        }
    }
    for(int j=0; j<N; j++){
        if(check[j]==false){
            return j;
        }
    }
    return -1;
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    cout<<missingnumber(arr, n)<<endl;;
    
    return 0;
}
