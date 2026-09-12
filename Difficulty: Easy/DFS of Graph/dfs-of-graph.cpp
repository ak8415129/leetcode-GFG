class Solution {
  public: 
  void dfsf(vector<vector<int>>& adj,int node ,vector<int> &res,vector<bool> &vis)
  {
      res.push_back(node);
      vis[node]=1;
      for(int i=0; i<adj[node].size(); i++)
      {
          int negh=adj[node][i];
          if(vis[negh]==0)
          {
              dfsf(adj,negh,res,vis);
          }
      } 
      return ;
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here 
        int n=adj.size();
        vector<int> res;
        vector<bool> vis(n,0);
        
        dfsf(adj,0,res,vis);
        
        return res;
        
    }
};