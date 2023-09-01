#include <iostream>  
using namespace std;  
int main()  
{  
int a[10], n, i;        
cin>>n;    
for(i=0; n>0; i++)    
{    
a[i]=n%8;    
n= n/8;  
}    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
}  