#include<iostream>
using namespace std;
bool powof2(int n){
    return !(n&n-1);
}


int main(){
   int n;
   cin>>n;
   cout<<powof2(n);
   return 0;
}