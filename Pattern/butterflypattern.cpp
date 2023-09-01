#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
        cout<<"*"<<" ";
        for(int k=1; k<=(2*(n-i)-1); k++)
        cout<<" "<<" ";
        for(int l=1; l<=i; l++){
            if(l==1 && i==n)
            continue;
            cout<<"*"<<" ";   
        }
    cout<<endl;
    }
     for(int i=n; i>=i; i--){
        for(int j=1; j<=i; j++)
        cout<<"*"<<" ";
        for(int k=1; k<=(2*(n-i)-1); k++)
        cout<<" "<<" ";
        for(int l=1; l<=i; l++){
            if(l==1 && i==n)
            continue;
            cout<<"*"<<" ";   
        }
    cout<<endl;
    }
    return 0;
    }

