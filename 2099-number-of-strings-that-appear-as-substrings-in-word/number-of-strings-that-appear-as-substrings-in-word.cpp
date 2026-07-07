class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        unordered_map<string,int> mp; 
        int ans=0;
        for(int i=0; i<patterns.size(); i++)
        {
            mp[patterns[i]]++;
        } 
        int n=word.size();
        for(int i=0; i<n; i++)
        {   
            string str="";
           
            for(int j=i; j<n; j++)
            {
                str+=word[j];
                 auto it = mp.find(str);

        if(it != mp.end())
        {
            ans += it->second;
            mp.erase(it);     
        }
            }  

        } 
        return ans;
    }
};