// User function Template for C++

class Solution {
  public:
  void dfs(int city,vector<vector<int>> &adj,vector<bool> &visited){
      visited[city]=true;
      for(int j=0;j<adj.size();j++){
          if(adj[city][j]==1 && !visited[j]){
              dfs(j,adj,visited);
          }
      }
  }
    int numProvinces(vector<vector<int>> adj, int V) {
          vector<bool>visited(V,false);
          int provinces =0;
          for(int i=0;i<V;i++){
              if(!visited[i]){
                 provinces++;
                 dfs(i,adj,visited);
              }
              
          }
          return provinces;
        
    }
};