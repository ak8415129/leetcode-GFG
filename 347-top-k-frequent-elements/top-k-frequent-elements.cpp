class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            mp[nums[i]]++;
        } 
       
       
        priority_queue<pair<int,int>,vector<pair<int,int>> ,greater<pair<int,int>>> pq;
         for(auto it:mp)
        { 
            int element=it.first;
            int frequency=it.second;
            pair<int,int> curr={it.second,it.first};
            if(pq.size()<k)
            {
                pq.push(curr);
                continue;
            } 
            if(curr.first<pq.top().first)
            continue;
            else
            {
                pq.pop();
                pq.push(curr);
            }
        }  
        vector<int> res;
        while(!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
        } 
        return res;
        
    }
};