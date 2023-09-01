#include "bits/stdc++.h"
using namespace std;

double fractionalKnapsack(vector<pair<int,int>> &a, int n, int w){
    sort(a.begin(), a.end(), [&](pair<int,int> &p1, pair<int,int> &p2){
        double v1=(double)p1.first/p1.second;
        double v2=(double)p2.first/p2.second;
        return v1>v2;
    });
    int ans=0;
    for(int i=0; i<n; i++){
        if(w>=a[i].second){
            ans+=a[i].first;
            w-=a[i].second;
            continue;
        }
        double vw=(double) a[i].first/a[i].second;
        ans+=vw*w;
        w=0;
        break;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first>>a[i].second;
    }
    int w;
    cin>>w;
    cout<<fractionalKnapsack(a,n,w);
    return 0;
}