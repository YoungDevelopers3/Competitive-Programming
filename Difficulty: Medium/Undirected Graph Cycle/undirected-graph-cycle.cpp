class Solution {
  public:
  
   bool cycle_check(int node,int parent,vector<vector<int>>&adj,vector<bool>&visited){
       
        visited[node]=true;
        for(int n:adj[node]){
            if(!visited[n]){
               if(cycle_check(n,node,adj,visited)){
                   return true;
               }
            }
            else if(n!=parent){
                return true;
            }
        }
        return false;
       
       
       
       
   }
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<bool>visited(V,false);
        vector<vector<int>>adj(V);
        
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
               if(cycle_check(i,-1,adj,visited)){
                   return true;
               }
                
            }
        }
        return false;
        
    }
};