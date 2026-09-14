class Solution {
  public:
    int countFreq(vector<int>& nums, int target) {
        // code here
        int n=nums.size();
                int low=0;
                int high=n-1;
                int ans1=-1 ,ans2=-1;
                while(low<=high)
                { 
                    int mid=low+(high-low)/2;
                    if(nums[mid]==target)
                    {
                        ans1=mid;
                        high=mid-1;

                    } 
                    else if(nums[mid]>target)
                    high=mid-1;
                    else
                    low=mid+1;
                }  
                low=0 ,high=n-1;
                 while(low<=high)
                { 
                    int mid=low+(high-low)/2;
                    if(nums[mid]==target)
                    {
                        ans2=mid;
                        low=mid+1;

                    } 
                    else if(nums[mid]>target)
                    high=mid-1;
                    else
                    low=mid+1;
                } 

                if(ans1==-1)
                return 0;
                
                return (ans2-ans1)+1;
    }
};
