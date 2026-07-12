class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans;
        int rank=1;
        vector<int> temp=arr;
        int n=arr.size();
        sort(temp.begin(),temp.end());
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++)
        {   
            if(i==0)
            {
                mp[temp[i]]=rank;
            }
            else{ 
             if(i!=0 && temp[i-1]==temp[i])
             mp[temp[i]]=rank;
             else
             {
                rank++;
             mp[temp[i]]=rank;

             } 
            }
        }
             for(int i=0; i<n;  i++)
             {
                ans.push_back(mp[arr[i]]);
             }
        
        return ans;
    }
};