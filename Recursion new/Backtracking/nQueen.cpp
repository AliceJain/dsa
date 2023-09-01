#include<iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    for(int r=0; r<x; r++){
        if(arr[r][y]==1){
            return false;
        }
    }

    int r=x;
    int c=y;
    while(r>=0 && c>=0){
        if(arr[r][c]==1){
            return false;
        }
        r--;
        c--;
    }

    r=x;
    c=y;
    while(r>=0 && c<n){
        if(arr[r][c]==1){
            return false;
        }
        r--;
        c++;
    }
    return true;
}

bool queen(int** arr, int x, int n){
    if(x>=n){
        return true;
    }

    for(int c=0; c<n; c++){
        if(isSafe(arr,x,c,n)){
            arr[x][c]=1;
            if(queen(arr,x+1,n)){
                return true;
            }
            arr[x][c]=0;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    int**arr=new int*[n];
    for(int i=0; i<n; i++){
        arr[i]=new int[n];
        for(int j=0; j<n; j++){
            arr[i][j]=0;
        }
    }

    if(queen(arr,0,n)){
        for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}