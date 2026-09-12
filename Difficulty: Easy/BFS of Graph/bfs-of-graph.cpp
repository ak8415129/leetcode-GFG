class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
      vector<int> res;
      int n=adj.size();
      vector<bool> vis(n,0);
      queue<int>q;
      q.push(0);
      vis[0]=1;
      while(!q.empty())
      {
          int node=q.front();
          q.pop();
          res.push_back(node);
          for(int i=0; i<adj[node].size(); i++)
          {
              int negh=adj[node][i];
              if(vis[negh]==0)
              {
                  q.push(negh);
                  vis[negh]=1;
              }
          }
      } 
      return res;
    }
};