class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size();
        int nodelete=arr[0];
        int onedelete=0;
        int ans=arr[0];
        for(int i=1; i<n; i++)
        {
            int prevNodelete = nodelete;
            int prevOneDelete = onedelete;

            nodelete = max(arr[i], prevNodelete + arr[i]);
             
            
              onedelete = max(prevOneDelete + arr[i],
                            prevNodelete);
            ans = max(ans,
                      max(nodelete, onedelete));
           
        }
       return ans; 
    }
};