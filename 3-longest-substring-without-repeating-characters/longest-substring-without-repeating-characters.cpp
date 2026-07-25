class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n=s.size();
        int low=0;
        int high=0;
        int ans=0;
        unordered_map<char,int> mp;
        while(high<n)
        {  
          

            while(mp.find(s[high])!=mp.end())
            {
                mp[s[low]]--;
                if(mp[s[low]]==0)
                mp.erase(s[low]);
                low++;
            }
              if(mp.find(s[high])==mp.end())
            {
              mp[s[high]]++;
                int len=(high-low)+1;
                ans=max(ans,len);

            }
          
            high++;


        }  

        if(ans==INT_MAX)
        return 0;
        
        return ans;       
    }
};