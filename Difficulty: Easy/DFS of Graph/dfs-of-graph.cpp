class Solution {
  public:
  
    void dfs_helper(vector<vector<int>>& adj,int start,vector<int> &visited,vector<int> &ans){
        visited[start]=true;
        ans.push_back(start);
        for(int v:adj[start]){
            if(!visited[v]){
                dfs_helper(adj,v,visited,ans);
            }
        }
    }
  
  
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int V=adj.size();
        int start=0;
        vector<int>visited(V,false);
        vector<int>ans;
        
        dfs_helper(adj,start,visited,ans);
        return ans;
        
        
        
        
        
    }
};