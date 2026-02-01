class Solution {
public:
    int minimumCost(vector<int>& nums) {
       
       int first=nums[0];
       sort(nums.begin()+1,nums.end());
       int sec=nums[1];
       int th=nums[2];

       return first+sec+th;
    }
};