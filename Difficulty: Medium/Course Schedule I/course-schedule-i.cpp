class Solution {
  public:
    bool DFSCycleCheck(int node,vector<bool>& visited,vector<bool>& recursive_path,vector<vector<int>>& prerequisites,vector<vector<int>>& adj){
        visited[node]=true;
        recursive_path[node]=true;
        for(auto i:adj[node]){
            
                if(!visited[i]){
                    if(DFSCycleCheck(i,visited,recursive_path,prerequisites,adj)){
                        return true;
                    }
                }
                else if(recursive_path[i]){
                    return true;
                }
        }
        recursive_path[node]=false;
        return false;
        
    }  
  
  
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        // Code here
        vector<bool>visited(n,false);
        vector<bool>recursive_path(n,false);
        vector<vector<int>> adj(n);

        for(auto it : prerequisites) {

            int u = it[0];

            int v = it[1];

            adj[u].push_back(v);

        }
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(DFSCycleCheck(i,visited,recursive_path,prerequisites,adj)){
                    return false;
                }
            }
        }
        return true;
        
        
    }
};