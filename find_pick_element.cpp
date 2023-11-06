#include<bits/stdc++.h>
using namespace std;
class Solution {
    int bs(vector<int> &nums){
    int e = nums.size() - 2;
    int s = 1;
    while(s<=e){
    int mid = s+(e-s)/2;
    if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
        return  mid;
    }
    else if(nums[mid]<nums[mid+1]){
   s= mid+1;
    } 
    else {
        e = mid-1;
    }
    }
    return -1;
}
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
   if(n==1){
       return 0;
   }
       if(nums[0]>nums[1]){
           return 0;
       }
       else if(nums[n-2]< nums[n-1]){
           return n-1;
       }

   return bs(nums);
    }
};