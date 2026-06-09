class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) { 
       int n=nums.size();
        // priority_queue<int> pq;
        int maxi=nums[0];
        int mini=nums[0];

        for(int i=1; i<n; i++)
        {
           mini=min(mini,nums[i]);
           maxi=max(maxi,nums[i]);

        //    int t=maxi-mini;
        //    pq.push(t);
           
        } 
       
       return 1LL * k * (maxi - mini);
        
    }
};