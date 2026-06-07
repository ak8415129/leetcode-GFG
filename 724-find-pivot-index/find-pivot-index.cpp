class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=0;
        int n=nums.size();
        int left=0 ,right=0;
        for(int i=0; i<n; i++)
        {
            totalsum+=nums[i];
        } 
        for(int i=0; i<n; i++)
        {    
            if(i!=0)
            left=left+nums[i-1];
            
            right=totalsum-(nums[i]+left);

            if(left==right)
            return i;
        }
        return -1;
    }
};