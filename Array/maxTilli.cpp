#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    int maxi=arr[0];
    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]);
        cout<<maxi<<endl;
    }
    return 0;
}