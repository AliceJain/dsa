#include<iostream>
using namespace std;
int getBit(int n, int pos){
    return ((n&(1<<pos))!=0);
}
void unique2(int arr[], int n){
    int xorsum=0;
        for(int i=0; i<n; i++){
            xorsum=xorsum^arr[i];
        }
        int tempxor=xorsum;
        int setbit=0;
        int pos=0;
        while(setbit!=1){
            setbit = xorsum & 1;
            pos++;
            xorsum=xorsum>>1;
        }
        int newxor=0;
        for(int i=0; i<n; i++){
            if(getBit(arr[i], pos-1)){
                newxor=newxor^arr[i];
            }
        }
        cout<<newxor<<endl;
        cout<<(tempxor^newxor)<<endl;
    }


int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
     cin>>arr[i];
    }
   unique2(arr,n);
   return 0;
}