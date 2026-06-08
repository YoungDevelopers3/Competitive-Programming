class Solution {
  public:
  
    bool dfs(int node,int col,vector<int> &color,vector<vector<int>> &adj){
        color[node]=col;
        for(auto it:adj[node]){
            if(color[it]==-1){
                if(dfs(it,!col,color,adj)==false){
                    return false;
                }
            }
            else if(color[it]==col){
                return false;
            }
        }
        return true;
    }
  
  
  
    bool isBipartite(int V, vector<vector<int>> &edges) {
        vector<vector<int>>adj(V);
        for (auto p:edges){
            int u=p[0];
            int v=p[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            
            
        }
        vector<int>color(V,-1);
        
        for(int i=0;i<V;i++){
            if(color[i]==-1){
                if(dfs(i,0,color,adj)==false){
                    return false;
                }
            }
        }
        return true;
    }
};