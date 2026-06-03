class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        unordered_map<int,pair<int,int>> mp;
        
       // priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>> ,greater<pair<int,pair<int,int>>> > pq;
         priority_queue<pair<float,pair<int,int>> > pq;
         for(int i=0; i<points.size(); i++)
        { int x = points[i][0];
            int y = points[i][1];

            float d = sqrt(x*x + y*y);   

            // map use nahi kiye kyuki distance [-1,1] aur [1,1] bana ke same ho jaayega ek lost ho jaayega issliye 

            if(pq.size() < k)
            {
                pq.push({d,{x,y}});
            }
            else
            {
                if(d < pq.top().first)
                {
                    pq.pop();
                    pq.push({d,{x,y}});
                }
            }
        }

        while(!pq.empty())
        {
            pair<int,int> e=pq.top().second;
            ans.push_back({e.first,e.second});
            pq.pop();
        }  
        
        return ans;
    } 
};