// User function Template for C++

class Solution {
  public:
    int smallestSumSubarray(vector<int>& nums) {
        // Code here
         int ans=nums[0];
        int maxat=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            int op1=maxat+nums[i];
            int op2=nums[i];
            maxat=min(op1,op2);
            ans=min(ans,maxat);
        }
     return ans;
    }
};
