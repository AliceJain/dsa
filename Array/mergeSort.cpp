#include<iostream>
using namespace std;
void merge(int a[], int lb1, int ub1, int lb2, int ub2){
    int n=lb1+ub2;
    int i,j,k,t[n];
    for(i=lb1, j=lb2, k=lb1; i<=ub1 && j<=ub2; k++){
        if(a[i]<a[j])
        t[k]=a[i++];
        else
        t[k]=a[j++];
    }
    while(i<=ub1)
    t[k++]=a[i++];
    while(j<=ub2)
    t[k++]=a[j++];
    for(i=lb1; i<=ub2; i++)
    a[i]=t[i];

}
void mergesort(int a[], int lb, int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,mid+1,ub);
    }
}
int main(){
    int a[]={2,5,3,8,6,9,1};
    mergesort(a,0,6);
    for(int i=0; i<7; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}