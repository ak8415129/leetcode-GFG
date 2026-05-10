class Solution {
public: 
    int solve(int i, vector<int>& nums, int target, vector<int>& dp,int n) {

        // If we reach last index
        if(i == n - 1)
            return 0;

        // Return already computed result
        if(dp[i] != -1)
            return dp[i];

        int ans = -1;

        // Try all possible next jumps
        for(int j = i + 1; j < n; j++) {

            // Check jump condition
            if(abs(nums[j] - nums[i]) <= target) {

                int temp = solve(j, nums, target, dp,n);

                // Update maximum jumps
                if(temp != -1) {
                    ans = max(ans, 1 + temp);
                }
            }
        }

        // Store and return answer
        return dp[i] = ans;
    } 
    
    int maximumJumps(vector<int>& nums, int target) { 
        int n=nums.size();
        vector<int> dp(n,-1);
         
        //  return solve(0,nums,target,dp,n); 
        dp[0]=0;

        for(int i=1; i<n; i++) {
            for(int j=0; j<i; j++) {
                // Check if the condition holds true and prev index was visited
                if(abs(nums[i]-nums[j]) <= target && dp[j]>-1) {
                    dp[i] = max(dp[i], 1+dp[j]);
                }
            }
        }

        return dp[n-1];
    }
};