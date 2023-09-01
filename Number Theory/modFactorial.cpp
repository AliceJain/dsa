#include<bits/stdc++.h>
using namespace std;
# define int long long
const int N = 1e5+2, MOD = 1e9+7;

int power(int x, int y, int p){
    int res=1;
    x=x%p;
    while(y>0){
        if(y&1)
          res=(res*x)%p;
        y= y>>1;    
        x=(x*x)%p;
    }
    return res;
}
int modInverse(int a, int p){
    return power(a,p-2,p);
}
int modFact(int n, int p){
    if(n>=p)
      return 0;
    int res=p-1;
    for(int i=n+1; i<p; i++){
        res=(res* modInverse(i,p))%p;
    }
    return res;
}

int32_t main()
{
    int n, p;
    cin>>n>>p;
    cout<<modFact(n,p)<<endl;
   
    return 0;
}