#include "bits/stdc++.h"
using namespace std;

int ceilIdx(int tail[], int l, int r, int x){
    while(r>l){
        int m=l+(r-l)/2;
        if(tail[m]>=x)
           r=m;
        else 
           l=m+1;
        return r;
    }
}
int lis(vector<int> &a, int n){
    int tail[n], len=1;
    tail[0]=a[0];
    for(int i=1; i<n; i++){
        if(a[i]>tail[len-1]){
            tail[len]=a[i];
            len++;
        }
        else{
            int c=ceilIdx(tail, 0, len-1, a[i]);
            tail[c]=a[i];

        }
    }
    return len;
}
int main(){    
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<lis(a,n)<<endl;
    return 0;
}




