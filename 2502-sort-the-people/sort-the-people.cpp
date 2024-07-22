class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) { 
        int n=names.size();
        vector<string> ans(n);
        
        unordered_map<int, string> mp;

        for (int i = 0; i < n; ++i) {
            mp[heights[i]] = names[i];
        }

        sort(heights.rbegin(), heights.rend());

        for (int i = 0; i < n; ++i) {
          ans[i] = mp[heights[i]];
        } 
        return ans;
        
    }
};