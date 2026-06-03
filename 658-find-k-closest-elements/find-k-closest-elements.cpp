class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

         priority_queue<pair<int,int>>  pq;
         for(int i=0; i<arr.size(); i++)
        { 
            float d = abs(arr[i]-x);   
            if(pq.size() < k)
            {
                pq.push({d,arr[i]});
            }
            else
            {
                if(d < pq.top().first)
                {
                    pq.pop();
                    pq.push({d,arr[i]});
                }
            }
        } 
        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
     sort(ans.begin(),ans.end());
        return ans;
    }
};