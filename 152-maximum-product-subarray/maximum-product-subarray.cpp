class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int bestneg=nums[0];
        int bestpos=nums[0];
        for(int i=1; i<n; i++)
        {
           int op1=bestneg*nums[i];
           int op2=bestpos*nums[i];
           int op3=nums[i];

            int newNeg = min(op1, min(op2, op3));
            int newPos = max(op1, max(op2, op3));

            bestneg = newNeg;
            bestpos = newPos;
           ans=max(ans,max(bestneg,bestpos));

        }
      return ans;
        
    }
};