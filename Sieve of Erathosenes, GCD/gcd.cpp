#include<iostream>
using namespace std;

int gcd(int n1, int n2){
    int num=1;
    while(num!=0){
      num=n1%n2;
      n1=n2;
      n2=num;
    }
    return n1;
}


int main(){

    int n1, n2;
    cin>>n1>>n2;
    
    cout<<gcd(n1,n2);

    return 0;
}