class Solution {
public: 
     int  maxi(vector<int> a)
     {
        int res=INT_MIN;
        int n=a.size();
        for(int i=0; i<n; i++)
        {
            res=max(res,a[i]);
        }
        return res;
     }
    int characterReplacement(string s, int k) {
        int n=s.size();
        int low=0 ,high=0;
        vector<int> a(256,0);
        int ans=INT_MIN;
        for(high=0; high<n; high++)
        {   
             a[s[high]]++;  
            int len=(high-low)+1;
            int  maxfreq=maxi(a);
            int diff=len-maxfreq; 
           
            if(diff<=k)
            {
                ans=max(ans,len);
            }
            while(diff>k)
            {
                 a[s[low]]--; 
                 low++;
             len=(high-low)+1;
             maxfreq=maxi(a);
            diff=len-maxfreq;
            } 
            

        } 
        return ans;
    }
};