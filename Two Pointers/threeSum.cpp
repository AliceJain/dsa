#include "bits/stdc++.h"
using namespace std;

bool threeSum(vector<int> nums, int target){
    bool found=false;
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size(); i++){
        int lo=i+1;
        int hi=nums.size()-1;
        while(lo<hi){
            int currSum=nums[i]+nums[lo]+nums[hi];
            if(currSum==target)
                 found=true;
            if(currSum<target)
                lo++;
            else
                hi--;
        }
    }
    return found;
}

int main(){
    vector<int> nums={6,25,1,3,34,9};
    int target=24;
    cout<<threeSum(nums,target)<<endl;
    return 0;
}