class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> m;
        
        for(int i = 0; i < nums.size(); i++){
            if(m.find(target - nums[i]) != m.end()){
                return {m[target-nums[i]], i};
            }
            m[nums[i]] = i;
        }
        
        return {}; 
        // vector<pair<int,int>> n;
        // for(int i=0; i<nums.size(); i++)
        // {
        //    n.push_back( make_pair(nums[i],i) );
        // }
        // sort(n.begin(),n.end());
       
        // int i=0 ,j=nums.size()-1;
        // while(i<=j)
        // {
        //     if(n[i].first+n[j].first<target)
        //     {
        //         i++;
        //     } 
        //     else if(n[i].first+n[j].first>target)
        //     {
        //         j--;
        //     } 
        //     else{
        //          return {n[i].second,n[j].second};
                
        //     }
        // } 
        // return {};
        
        
    }
};