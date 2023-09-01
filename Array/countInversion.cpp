#include<iostream>
using namespace std;
long long merge(int a[], int lb1, int ub1, int lb2, int ub2){
    long long inv=0;
    int n=lb1+ub2;
    int i,j,k,t[n];
    int n1=ub1-lb1+1;
    for(i=lb1, j=lb2, k=lb1; i<=ub1 && j<=ub2; k++){
        if(a[i]<=a[j])
        t[k]=a[i++];
        else{
        t[k]=a[j];
        inv+=(n1-i);
        j++;
        }
    }
    while(i<=ub1)
    t[k++]=a[i++];
    while(j<=ub2)
    t[k++]=a[j++];
    // for(i=lb1; i<=ub2; i++)
    // a[i]=t[i];
    return inv;

}
long long mergesort(int a[], int l, int r){
    long long inv=0;
    if(l<r){
        int mid=(l+r)/2;
        inv+=mergesort(a,l,mid);
        inv+=mergesort(a,mid+1,r);
        inv+=merge(a,l,mid,mid+1,r);
    }
    return inv;
}
int32_t main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<mergesort(arr,0,n-1);
    return 0;
}