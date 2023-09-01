#include "bits/stdc++.h"
using namespace std;

void computeNumber(vector<int> nums, int k){
    pair<int,int> ans;
    int sum=0;
    for(int i=0; i<k; i++){
        sum+=nums[i];
    }
    bool found=false;
    if(sum%3==0){
        ans=make_pair(0,k-1);
        found=true;
    }
    for(int j=k; j<nums.size(); j++){
        if(found)
           break;
        sum=sum+nums[j]-nums[j-k];
        if(sum%3==0){
        ans=make_pair(j-k+1,j);
         found=true;
    }
    }
    if(!found){
        ans=make_pair(-1,0);
    }
    if(ans.first!=-1){
        for(int i=ans.first; i<=ans.second; i++){
            cout<<nums[i]<<" ";
        }
    }
    cout<<endl;
    }

int main(){
    vector<int> nums={84,23,45,12,56,82};
    int k=3;
    computeNumber(nums,k);
    return 0;
}