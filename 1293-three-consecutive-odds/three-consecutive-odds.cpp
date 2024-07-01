class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) { 
        bool ans=false;
        int n=arr.size();
        if(n<3)
        {
            return false;
        } 
        bool first=false ,sec=false;
        if(arr[0]%2)
        first=true;
        if(arr[1]%2)
        sec=true;
        for(int i=2; i<n; i++)
        { 
            bool curr=false;
            if(arr[i]%2)
            curr=true;

            if(first && sec && curr)
            {
                return true;
            } 
            first=sec;
            sec=curr; 
        }
      return ans;
        
    }
};