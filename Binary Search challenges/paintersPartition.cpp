#include<bits/stdc++.h>
using namespace std;

int findFeasible(int boards[], int n, int limit){
    int sum=0; 
    int painters=1;
    for(int i=0; i<n; i++){
        sum+=boards[i];
        if(sum>limit){
            sum=boards[i];
            painters++;
        }
    }
    return painters;
}

int paintersPartition(int boards[], int n, int m){
    int totalLen=0, k=0;
    for(int i=0; i<n; i++){
        k=max(k,boards[i]);
        totalLen=totalLen+boards[i];
    }
    int low=k, high=totalLen;
    while(low<high){
       int mid=(low+high)/2;
       int painters= findFeasible(boards,n,mid);
       if(painters<=m)
        high=mid;
       else  
        low=mid+1;
    }
    return low;
}

int main(){
    int arr[]={10,20,30,40};
    int n=4;
    int m=2;
    cout<<paintersPartition(arr,n,m)<<endl;
    return 0;
}