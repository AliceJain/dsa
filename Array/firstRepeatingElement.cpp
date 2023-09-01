#include <iostream>
#include <limits.h>
using namespace std;
int firstrepeatingelement(int arr[], int n){
    const int N=1e6+2;
    int idx[N];
    for(int i=0; i<n; i++){
        idx[i]=-1;
    }
    int minidx=INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[arr[i]]!=-1){
            minidx=min(minidx, idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    // if(minidx==INT_MAX)
    //    count<<-1<<endl;
    return (minidx+1);
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    cout<<firstrepeatingelement(arr, n)<<endl;;
    
    return 0;
}
