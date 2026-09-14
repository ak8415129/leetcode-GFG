class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here 
        int n=arr.size();
        int low=0 ,high=n-1;
        int ans=-1;
        while(low<=high)
        {
           int mid=low+(high-low)/2;
          
           if(arr[mid]>=x)
           { 
               ans=mid;
               high=mid-1;
           }
          else  if(arr[mid]<x)
           {  
               
               
               low=mid+1;
           } 
        }
        
        
        
        
        return ans;
        
    }
};