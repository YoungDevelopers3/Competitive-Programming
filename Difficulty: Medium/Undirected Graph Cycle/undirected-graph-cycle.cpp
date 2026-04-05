class Solution {
  public:
  
  
  bool check(int start,int parent,vector<bool> &visited,vector<vector<int>> &adj){
      visited[start]=true;
      for(int v:adj[start]){
          if(!visited[v]){
              if(check(v,start,visited,adj)){
                  return true;
              }
          }
          else if(v!=parent){
              return true;
          }
      }
      return false;
      
  }
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
        vector<vector<int>> adj(V);
        
        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        
        vector<bool>visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(check(i,-1,visited,adj)){
                    return true;
                }
            }
        }
        return false;
        
    }
};