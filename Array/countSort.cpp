#include"bits/stdc++.h"
using namespace std;
void countsort(int *arr, int n){
    int m=arr[0];
    for(int i=0; i<n; i++){
      m=max(m,arr[i]);
    }
    int *cnt=new int(m+1);
    for(int i=0; i<m+1; i++){
        cnt[i]=0;
    }
    for(int i=0; i<n; i++){
        cnt[arr[i]]++;
    }
    for(int i=0, j=0; i<m+1;){
        if(cnt[i]==0)
           i++;
        else{
            arr[j++]=i;
            cnt[i]--;
        }
    }

}
int main(){
    int a[]={2,5,3,8,6,9,1};
    countsort(a,7);
    for(int i=0; i<7; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}