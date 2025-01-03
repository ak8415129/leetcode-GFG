class Solution {
public:
    int waysToSplitArray(vector<int>& nums) { 
        int n=nums.size();
        int ans=0;
        vector<long long> presum(n);  
        presum[0]=nums[0]; 
        long long tsum=nums[0];
        for(int i=1; i<n; i++)
        {
            presum[i]=presum[i-1]+nums[i]; 
            tsum+=nums[i];
        } 
       
        
        for(int i=0; i<n-1; i++)
        { 
           
            long long cmp=tsum-presum[i];
            if(presum[i]>=cmp)
            {
                ans++;
            }
        }

        
      return ans;  
    }
};