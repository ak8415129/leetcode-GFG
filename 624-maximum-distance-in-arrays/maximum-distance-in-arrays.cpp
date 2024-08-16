class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) { 
        int n=arrays.size();
       int mini = arrays[0][0];
        int maxi = arrays[0].back();
        int result=0;
        for(int i=1; i<n; i++)
        {
            int m=arrays[i].size(); 
            int localMin = arrays[i][0];
            int localMax = arrays[i][m-1];

            result = max(result, max(localMax - mini, maxi - localMin));

            maxi=max(maxi,arrays[i][m-1]);
            mini=min(mini,arrays[i][0]);
        } 
        
        return result;
    }
};