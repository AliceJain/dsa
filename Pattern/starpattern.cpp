#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1; i<=n; i++){
        int j;
        for(j=1; j<=n-i; j++)
        cout<<" ";
        int k=i;
        for(; j<=n+i-1; j++)
            cout<<"*";
    cout<<endl;
    }
    for(int i=n; i>=1; i--){
        int j;
        for(j=1; j<=n-i; j++)
        cout<<" ";
        int k=i;
        for(; j<=n+i-1; j++)
            cout<<"*";
    cout<<endl;
    }
    return 0;
    }

