class Solution {
public: 
  bool isvowel(char c)
  {
     if(c=='a' || c=='e'||c=='i'||c=='o'||c=='u')
     {
        return true;
     } 

     return false;
  }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) { 
       
        unordered_map<int,int> mp; 
        int n=words.size();
        for(int i=0; i<n; i++)
        {
            string temp=words[i];
            int r=temp.size();
            if(isvowel(temp[0]) && isvowel(temp[r-1]))
            {
                mp[i]=1;
            } 
            else{
                mp[i]=0;
            }
        } 
        vector<int> help(n,0);
        help[0]=mp[0];
         for(int i=1; i<n; i++)
        {
           help[i]=help[i-1]+mp[i];
        } 

       int sizeq=queries.size();
        vector<int>ans(sizeq,0);
        for(int i=0; i<sizeq; i++){
            int st=queries[i][0];
            int end=queries[i][1];
            
            if(st==0) 
            ans[i]=help[end];
            else 
            ans[i]=help[end]-help[st-1];
        }


        // for(int i=0; i<queries.size(); i++)
        // {   
        //     int count=0;
        //     for(int j=queries[i][0]; j<=queries[i][1]; j++)
        //     {
        //         if(mp.find(j)!=mp.end())
        //         {
        //             count++;
        //         }
        //     }  
        //     ans.push_back(count);

        // } 
        return ans;
    }
};