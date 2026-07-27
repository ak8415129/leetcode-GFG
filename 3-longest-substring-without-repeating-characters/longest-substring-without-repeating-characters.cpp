class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n=s.size();
        int low=0;
        int high=0;
        int ans=0;
        unordered_map<char,int> mp;
        for(high=0; high<n; high++)
        {
            mp[s[high]]++;
            int k=(high-low)+1;
            if(k==mp.size())
            {
                ans=max(ans,k);
            } 
            while(k>mp.size())
            {
                 mp[s[low]]--;
                if(mp[s[low]]==0)
                mp.erase(s[low]);
                low++;
                k=(high-low)+1; 
            } 
        }
        // while(high<n)
        // {  
          

        //     while(mp.find(s[high])!=mp.end())
        //     {
        //         mp[s[low]]--;
        //         if(mp[s[low]]==0)
        //         mp.erase(s[low]);
        //         low++;
        //     }
        //       if(mp.find(s[high])==mp.end())
        //     {
        //       mp[s[high]]++;
        //         int len=(high-low)+1;
        //         ans=max(ans,len);

        //     }
          
        //     high++;


        // }  

        if(ans==INT_MAX)
        return 0;
        
        return ans;       
    }
};