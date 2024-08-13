class Solution {
public:
    void help(vector<int> &v ,int i ,int k ,int sum ,vector<int> &subset,vector<vector<int>> &ans )
    {   
        if(sum==k)
        {
           ans.push_back(subset);
            return ;
        }
         if(sum>=k)
         {
             return ;
         }
        if(i>=v.size())
        {
            return ;
        }
        //include
        subset.push_back(v[i]);
         sum=sum+v[i];
        help(v,i+1,k,sum,subset,ans);
        
        //not include
        while(i+1<v.size() && v[i]==v[i+1])
             i++;
        subset.pop_back();
          sum=sum-v[i];
        help(v,i+1,k,sum,subset,ans);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>> ans;
    
        vector<int> subset;
        sort(candidates.begin(),candidates.end());
            help(candidates,0,target,0,subset,ans);
        return ans;
    }
};