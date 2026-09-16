class Solution {
  public: 
  bool dis(vector<int> &arr, int k ,int n,int guess)
  {
      int cow=1; // pahla cow rakh liye 
      int prevpos=arr[0]; 
      for(int i=1; i<n; i++)
      {
          int dist=arr[i]-prevpos;
          
          if(dist>=guess)
          {
              cow++;
              prevpos=arr[i];
          }
      } 
      if(cow>=k)
      return true;
      
      return false;
      
  }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
      int n=arr.size();
      sort(arr.begin(),arr.end()); 
      int res=-1;
      
      int low=1; // minimum distance between any cow
      int high=arr[n-1]-arr[0];
      
      while(low<=high)
      {
          int guess=(low+high)/2;
          
          if(dis(arr,k,n,guess))
          {
              res=guess;
              low=guess+1;
          }
          else
          high=guess-1;
      } 
      return res;
    }
};