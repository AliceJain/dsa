#include "bits/stdc++.h"
using namespace std;

int optimalMergePattern(vector<int> &a, int n){
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i=0; i<n; i++){
        pq.push(a[i]);
    }
    int ans=0;
    while(pq.size()>1){
        int f1=pq.top();
        pq.pop();
        int f2=pq.top();
        pq.pop();
        ans+=f1+f2;
        pq.push(f1+f2);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<optimalMergePattern(a,n);
    return 0;
}