class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum=nums[0];
        int minsum=nums[0];
        int ansmaxsum=nums[0];
        int ansminsum=nums[0];
        int n=nums.size();
       for(int i=1; i<n; i++)
       {
           maxsum=max(nums[i],nums[i]+maxsum);
           ansmaxsum=max(ansmaxsum,maxsum); 

           minsum=min(nums[i],minsum+nums[i]);
           ansminsum=min(ansminsum,minsum);
       }
        
        return max(abs(ansminsum),abs(ansmaxsum));
    }
};