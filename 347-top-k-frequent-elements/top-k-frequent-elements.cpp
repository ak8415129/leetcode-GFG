class Solution {
    struct Cmp {
    bool operator()(pair<int, int>& a, pair<int, int>& b) {
        if(a.first!=b.first)
        return a.first > b.first;

        return a.second > b.second; 
    }
};
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // padho with pratyush
       int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            mp[nums[i]]++;
        } 
       
       // for cmp i use inbuild greater<pair<int,int>>>
        priority_queue<pair<int,int>,vector<pair<int,int>> ,Cmp> pq;
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