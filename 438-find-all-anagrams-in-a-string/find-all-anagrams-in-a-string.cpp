class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int k = p.size();
        int n = s.size();

        if(n < k)
            return ans;

        unordered_map<char,int> mp, m;

        for(char c : p)
            m[c]++;

        int i = 0, j = 0;

        while(j < k)
        {
            mp[s[j]]++;
            j++;
        } 

        while(j<n)
        {
            if(mp == m)
                ans.push_back(i);

           

            mp[s[i]]--;
            if(mp[s[i]] == 0)
             mp.erase(s[i]);

            i++;

            mp[s[j]]++;
            j++;
        } 

          if(mp == m)
          ans.push_back(i);
          
        return ans;
    }
};