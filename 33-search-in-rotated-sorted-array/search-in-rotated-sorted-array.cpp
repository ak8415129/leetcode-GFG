class Solution {
public:
    int search(vector<int>& nums, int target) { 
         int n=nums.size();
        int low=0;
        int high=n-1;
        int res=0;
       
        while(low<=high)
        { 
            int mid=low+(high-low)/2;

            if(nums[mid]>nums[n-1])
            low=mid+1;

            else
            {
               high=mid-1;
            }
           
        }  
        int  rotate=low;
         //  we have two part 
         low=0 ,high=rotate-1;
          while(low<=high)
        {
           int mid=low+(high-low)/2;
            if(nums[mid]==target)
            return mid;

            else if(nums[mid]>target)
            high=mid-1;
            else
            low=mid+1;
        }

         low=rotate ,high=n-1;
         while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            return mid;

            else if(nums[mid]>target)
            high=mid-1;
            else
            low=mid+1;
        }
        
        return -1;
         
        
    }
};