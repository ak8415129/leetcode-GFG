class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int  n=nums.size();
        int sum=0;
        for(int i=0; i<n; i++)
        {
            int num=nums[i];
            int sum=0;
            while(num!=0)
            {
                int r=num%10;
                sum=sum+r;
                num=num/10;

            } 
            if(sum==i)
            return i;
        } 
        return -1;
        
    }
};