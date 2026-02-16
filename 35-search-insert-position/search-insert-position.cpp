class Solution {
public:
    int searchInsert(vector<int>& nums, int target) { 
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int x=target;
    int low = 0, high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]<x){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
   
  return ans+1;
    }
};