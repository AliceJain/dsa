#include "bits/stdc++.h"
#include<cmath>
using namespace std;

bool isPalindrome(int n){
    int temp=n, number=0;
    while(temp>0){
        number = number*10 + temp%10;
        temp=temp/10;
    }
    if(number==n)
       return true;
    return false;

}

int findPalindromicSubarray(vector<int> nums, int k){
    int num=0;
    for(int i=0; i<k; i++){
        num=num*10+nums[i];
    }
    if(isPalindrome(num))
        return 0;

    for(int j=k; j<nums.size(); j++){
        num=(num % (int)pow(10, k-1))*10 + nums[j];
        if(isPalindrome(num))
           return j-k+1;
    }
    return -1;
}
int main(){
    vector<int> nums={2,3,5,1,1,5};
    int k=4; 
    int ans=findPalindromicSubarray(nums,k);
    if(ans!=-1){
        for(int i=ans; i<ans+k; i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}